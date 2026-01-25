# Exercícios de Pesquisa Operacional

## Exercício 1 - Problema do Sapateiro

Um sapateiro faz 6 sapatos por hora, se fizer somente sapatos, e 5 cintos por hora, se fizer somente cintos. Ele gasta 2 unidades de couro para fabricar 1 unidade de sapato e 1 unidade couro para fabricar uma unidade de cinto. Sabendo-se que o total disponível de couro é de 6 unidades e que o lucro unitário por sapato é de 5 unidades monetárias e o do cinto é de 2 unidades monetárias, pede-se: o modelo do sistema de produção do sapateiro, se o objetivo é maximizar seu lucro por hora.

### Variáveis de Decisão
- **x₁** = número de sapatos produzidos por hora
- **x₂** = número de cintos produzidos por hora

### Função Objetivo
**Maximizar:** Z = 5x₁ + 2x₂

### Restrições
1. **Couro:** 2x₁ + x₂ ≤ 6
2. **Tempo:** (1/6)x₁ + (1/5)x₂ ≤ 1
3. **Não negatividade:** x₁, x₂ ≥ 0

## Exercício 2 - Problema da Fábrica de Produtos P1 e P2

Certa empresa fabrica 2 produtos P1 e P2. O lucro por unidade de P1 é de 100 u.m. e o lucro unitário de P2 é de 150 u.m. A empresa necessita de 2 horas para fabricar uma unidade de P1 e 3 horas para fabricar uma unidade de P2. O tempo mensal disponível para essas atividades é de 120 horas. As demandas esperadas para os 2 produtos levaram a empresa a decidir que os montantes produzidos de P1 e P2 não devem ultrapassar 40 unidades de P1 e 30 unidades de P2 por mês. Construa o modelo do sistema de produção mensal com o objetivo de maximizar o lucro da empresa.

### Variáveis de Decisão
- **x₁** = produção de produto P1
- **x₂** = produção de produto P2

### Função Objetivo
**Maximizar:** Z = 100x₁ + 150x₂

### Restrições
1. **Tempo:** 2x₁ + 3x₂ ≤ 120
2. **Demanda P1:** x₁ ≤ 40
3. **Demanda P2:** x₂ ≤ 30
4. **Não negatividade:** x₁, x₂ ≥ 0

## Exercício 3 - Problema do Vendedor de Frutas

Um vendedor de frutas pode transportar 800 caixas de frutas para sua região de vendas. Ele necessita transportar 200 caixas de laranjas a 20 u.m. de lucro por caixa, pelo menos 100 caixas de pêssegos a 10 u.m. de lucro por caixa, e no máximo 200 caixas de tangerinas a 30 u.m. de lucro por caixa. De que forma deverá ele carregar o caminhão para obter o lucro máximo? Construa o modelo do problema.

### Variáveis de Decisão
- **x₁** = caixas de laranja
- **x₂** = caixas de pêssego
- **x₃** = caixas de tangerina

### Função Objetivo
**Maximizar:** Z = 20x₁ + 10x₂ + 30x₃

### Restrições
1. **Capacidade transporte:** x₁ + x₂ + x₃ ≤ 800
2. **Necessidade laranja:** x₁ = 200
3. **Mínimo pêssego:** x₂ ≥ 100
4. **Máximo tangerina:** x₃ ≤ 200
5. **Não negatividade:** x₁, x₂, x₃ ≥ 0

## Exercício 4 - Problema da Rede de Televisão

Uma rede de televisão local tem o seguinte problema: foi descoberto que o programa "A" com 20 minutos de música e 1 minuto de propaganda chama a atenção de 30.000 telespectadores, enquanto o programa "B", com 10 minutos de música е 1 minuto de propaganda chama a atenção de 10.000 telespectadores. No decorrer de uma semana, o patrocinador insiste no uso de no mínimo, 5 minutos para sua propaganda e que não há verba para mais de 80 minutos de música. Quantas vezes por semana cada programa deve ser levado ao ar para obter o número máximo de telespectadores? Construa o modelo do sistema.

### Variáveis de Decisão
- **x₁** = exibições por semana do Programa A
- **x₂** = exibições por semana do Programa B

### Função Objetivo
**Maximizar:** Z = 30.000x₁ + 10.000x₂

### Restrições
1. **Música:** 20x₁ + 10x₂ ≤ 80
2. **Propaganda:** x₁ + x₂ ≥ 5
3. **Não negatividade:** x₁, x₂ ≥ 0

## Exercício 5 - Problema da Fábrica de Cintos

Uma empresa fabrica 2 modelos de cintos de couro. O modelo M1, de melhor qualidade, requer o dobro do tempo de fabricação em relação ao modelo M2. Se todos os cintos fossem do modelo M2, a empresa poderia produzir 1.000 unidades por dia. A disponibilidade de couro permite fabricar 800 cintos de ambos os modelos por dia. Os cintos empregam fivelas diferentes, cuja disponibilidade diária é de 400 para M1 e 700 para M2. Os lucros unitários são de $ 4,00 para M1 e $ 3,00 para M2. Qual o programa ótimo de produção que maximiza o lucro total diário da empresa? Construa o modelo do sistema descrito.

### Variáveis de Decisão
- **x₁** = produção diária de M1
- **x₂** = produção diária de M2

### Função Objetivo
**Maximizar:** Z = 4x₁ + 3x₂

### Restrições
1. **Fivelas M1:** x₁ ≤ 400
2. **Fivelas M2:** x₂ ≤ 700
3. **Couro:** x₁ + x₂ ≤ 800
4. **Capacidade produção:** 2x₁ + x₂ ≤ 1000
5. **Não negatividade:** x₁, x₂ ≥ 0

## Exercício 6 - Problema dos Recursos Produtivos

Uma empresa, após um processo de racionalização de produção, ficou com disponibilidade de 3 recursos produtivos, R1, R2 e R3. Um estudo sobre o uso desses recursos indicou a possibilidade de se fabricar 2 produtos P1 e P2. Levantando os custos e consultando o departamento de vendas sobre o preço de colocação no mercado, verificou-se que P1 daria um lucro de $ 120,00 por unidade e Р2, $ 150,00 por unidade. O departamento de produção forneceu a seguinte tabela de uso de recursos.

### Tabela de Uso de Recursos

| Produto | Recurso R1 | Recurso R2 | Recurso R3 |
|---------|------------|------------|------------|
| **P1**  | 2          | 3          | 5          |
| **P2**  | 4          | 2          | 3          |
| **Disponibilidade mensal** | 100 | 90 | 120 |

Que produção mensal de P1 e P2 traz o maior lucro para a empresa? Construa о modelo do sistema.

### Variáveis de Decisão
- **x₁** = produção de P1 por mês
- **x₂** = produção de P2 por mês

### Função Objetivo
**Maximizar:** Z = 120x₁ + 150x₂

### Restrições
1. **Recurso R1:** 2x₁ + 4x₂ ≤ 100
2. **Recurso R2:** 3x₁ + 3x₂ ≤ 90
3. **Recurso R3:** 5x₁ + 3x₂ ≤ 120
4. **Não negatividade:** x₁, x₂ ≥ 0

## Exercício 7 - Problema do Fazendeiro

Um fazendeiro está estudando a divisão de sua propriedade nas seguintes atividades produtivas:

### Atividades Produtivas

**A (Arrendamento)**  
Destinar certa quantidade de alqueires para a plantação de cana-de-açúcar, a uma usina local, que se encarrega da atividade e paga pelo aluguel da terra $ 300,00 por alqueire por ano.

**P (Pecuária)**  
Usar outra parte para a criação de gado de corte. A recuperação das pastagens requer adubação (100 kg/Alq) e irrigação (100.000 L de água/Alq) por ano. O lucro estimado nessa atividade é de $ 400,00 por alqueire por ano.

**S (Plantio de Soja)**  
Usar uma terceira parte para o plantio de soja. Essa cultura requer 200 kg por alqueire de adubos e 200.000 L de água/Alq para irrigação por ano. O lucro estimado nessa atividade é de $ 500,00/alqueire no ano.

### Recursos Disponíveis (por ano)
- 12.750.000 L de água
- 14.000 kg de adubo
- 100 alqueires de terra

Quantos alqueires deverá destinar a cada atividade para proporcionar o melhor retorno? Construa o modelo de decisão.

### Variáveis de Decisão
- **x₁** = alqueires para arrendamento (A)
- **x₂** = alqueires para pecuária (P)
- **x₃** = alqueires para plantio de soja (S)

### Função Objetivo
**Maximizar:** Z = 300x₁ + 400x₂ + 500x₃

### Restrições
1. **Água:** 100.000x₂ + 200.000x₃ ≤ 12.750.000
2. **Adubo:** 100x₂ + 200x₃ ≤ 14.000
3. **Terra:** x₁ + x₂ + x₃ ≤ 100
4. **Não negatividade:** x₁, x₂, x₃ ≥ 0

## Exercício 8 - Problema de Marketing

O departamento de marketing de uma empresa estuda a forma mais econômica de aumentar em 30% as vendas de seus dois produtos P1 е P2. As alternativas são:

### Alternativas de Investimento

**a) Programa Institucional**  
Investir em um programa institucional com outras empresas do mesmo ramo. Esse programa requer um investimento mínimo de $ 3.000,00 e deve proporcionar um aumento de 3% nas vendas de cada produto, para cada $ 1.000,00 investidos.

**b) Divulgação Direta**  
Investir diretamente na divulgação dos produtos. Cada $ 1.000,00 investidos em P1 retornam um aumento de 4% nas vendas, enquanto que para P2 o retorno é de 10%.

A empresa dispõe de $ 10.000,00 para esse empreendimento. Quanto deverá destinar a cada atividade? Construa o modelo do sistema descrito.

### Variáveis de Decisão
- **x₁** = valor (em milhares de R$) investido no programa institucional
- **x₂** = valor (em milhares de R$) investido na divulgação direta de P1
- **x₃** = valor (em milhares de R$) investido na divulgação direta de P2

### Função Objetivo
**Minimizar:** Z = x₁ + x₂ + x₃

### Restrições
1. **Meta P1:** 3x₁ + 4x₂ ≥ 30
2. **Meta P2:** 3x₁ + 10x₃ ≥ 30
3. **Orçamento:** x₁ + x₂ + x₃ ≤ 10
4. **Investimento mínimo:** x₁ ≥ 3
5. **Não negatividade:** x₂, x₃ ≥ 0
