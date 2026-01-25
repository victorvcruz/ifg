import pandas as pd
import pulp
import numpy as np

# --- 1. SIMULAÇÃO DE DADOS (Carga dos PDFs) ---

# Dados Dummy baseados na estrutura do "Dados animais - Cows.pdf" [2]
# Criando um subset representativo de 268 animais
np.random.seed(42)
cows_data = {
    'cow_id': [f'Cow_{i}' for i in range(1, 269)],
    'Lactation': np.random.choice([7, 8, 11, 13, 14], 268, p=[0.3, 0.2, 0.2, 0.15, 0.15]),
    'PB_Req_kg': np.random.normal(3.5, 0.5, 268),  # Necessidade de Proteína Bruta (kg/dia)
    'NDT_Req_Mcal': np.random.normal(30, 5, 268)   # Necessidade de Energia (Mcal/dia)
}
df_cows = pd.DataFrame(cows_data)

# Tratamento de Outliers/Dados Faltantes (Regra de Negócio)
# Vacas com necessidades negativas ou nulas (erros de leitura) são ajustadas pela média
df_cows.loc[df_cows['PB_Req_kg'] <= 0, 'PB_Req_kg'] = df_cows['PB_Req_kg'].mean()

# Dados Dummy baseados no "Dados animais - Diet.pdf" [1]
# Capacidades Exatas: A=46, N=70, B=45, C=45, D=42, E=20 -> Total 268
pens_data = {
    'Pen': ['A', 'N', 'B', 'C', 'D', 'E'],
    'Capacity': [46, 70, 45, 45, 42, 20],
    # Oferta nutricional simulada baseada na dieta x ingredientes [5]
    'PB_Supply_kg': [4.0, 3.2, 3.8, 3.6, 3.0, 2.5], 
    'NDT_Supply_Mcal': [20, 19, 22, 21, 19, 18]
}
df_pens = pd.DataFrame(pens_data).set_index('Pen')

# --- 2. CÁLCULO DA MATRIZ DE CUSTOS (Desvio Absoluto) ---

# Dicionário para armazenar custos: cost[cow_id][pen_id]
costs = {}

# Pesos para balancear a importância dos nutrientes (Premissa de Modelagem)
W_PB = 10  # Proteína é caro, prioridade alta
W_NDT = 1  # Energia

for i, row_cow in df_cows.iterrows():
    cow_id = row_cow['cow_id']
    costs[cow_id] = {}
    
    for pen_id, row_pen in df_pens.iterrows():
        # Desvio Absoluto Linearizado (Pré-cálculo)
        dev_pb = abs(row_cow['PB_Req_kg'] - row_pen['PB_Supply_kg'])
        dev_ndt = abs(row_cow['NDT_Req_Mcal'] - row_pen['NDT_Supply_Mcal'])
        
        total_cost = (dev_pb * W_PB) + (dev_ndt * W_NDT)
        
        # REGRA DE NEGÓCIO (Primíparas):
        # Se Lactação == 1 e Lote não for 'N' ou 'E' (lotes menores/específicos), penaliza
        if row_cow['Lactation'] == 1 and pen_id not in ['N', 'E']:
            total_cost *= 1.5 # Penalidade de 50% no custo
            
        costs[cow_id][pen_id] = total_cost

# --- 3. MODELAGEM MIP COM PuLP ---

# Criação do Problema [24]
prob = pulp.LpProblem("Otimizacao_Alocacao_Vacas", pulp.LpMinimize)

# Variáveis de Decisão (Binárias) [7]
# x[cow][pen] = 1 se a vaca for alocada, 0 caso contrário
x = pulp.LpVariable.dicts("Aloc", 
                          (df_cows['cow_id'], df_pens.index), 
                          cat='Binary')

# Função Objetivo: Minimizar o custo total (Soma dos desvios) [8]
prob += pulp.lpSum([costs[i][j] * x[i][j] 
                    for i in df_cows['cow_id'] 
                    for j in df_pens.index])

# Restrições

# 1. Unicidade: Cada vaca deve estar em exatamente 1 lote
for i in df_cows['cow_id']:
    prob += pulp.lpSum([x[i][j] for j in df_pens.index]) == 1, f"Unicidade_{i}"

# 2. Capacidade: O número de vacas no lote não pode exceder a capacidade [19]
for j in df_pens.index:
    prob += pulp.lpSum([x[i][j] for i in df_cows['cow_id']]) <= df_pens.loc[j, 'Capacity'], f"Capacidade_{j}"

# --- 4. SOLUÇÃO ---

# Definição de Time Limit para evitar travamento em instâncias complexas
# Solver CBC (Coin-OR) padrão do PuLP [25]
solver = pulp.PULP_CBC_CMD(timeLimit=60, msg=True)

print("Iniciando resolução do MIP...")
prob.solve(solver)

# --- 5. RESULTADOS ---

print(f"Status da Solução: {pulp.LpStatus[prob.status]}")
print(f"Desvio Total (Custo Objetivo): {pulp.value(prob.objective)}")

# Validação das Capacidades
print("\nOcupação dos Lotes:")
for j in df_pens.index:
    count = sum([x[i][j].varValue for i in df_cows['cow_id']])
    cap = df_pens.loc[j, 'Capacity']
    print(f"Lote {j}: {int(count)}/{cap} animais")

# Alocações completas
print("\nTodas as Alocações:")
for i in df_cows['cow_id']:
    for j in df_pens.index:
        if x[i][j].varValue == 1:
            print(f"{i} -> Lote {j} (Lactação: {df_cows[df_cows['cow_id']==i]['Lactation'].values[0]})")