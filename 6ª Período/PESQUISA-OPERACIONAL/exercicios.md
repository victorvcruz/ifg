## Exercícios Pesquisa Operacional

1 - Um sapateiro faz 6 sapatos por hora, se fizer somente sapatos, e 5 cintos por hora, se fizer somente cintos. Ele gasta 2 unidades de couro para fabricar 1 unidade de sapato e 1 unidade couro para fabricar uma unidade de cinto. Sabendo-se que o total disponível de couro é de 6 unidades e que o lucro unitário por sapato é de 5 unidades monetárias e o do cinto é de 2 unidades monetárias, pede-se: o modelo do sistema de produção do sapateiro, se o objetivo é maximizar seu lucro por hora.

Variáveis de decisão:

x1 = número de sapatos produzidos por hora
x2 = número de cintos produzidos por hora

Função objetiva:
Maximizar Z = 5x1 + 2x2

Restrições:
1) 2x1 + 1x2 ≤ 6 (restrição de couro)
2) (1/6)x1 + (1/5)x2 ≤ 1 (restrição de tempo)
3) x1, x2 ≥ 0 (não negatividade)

2 - Certa empresa fabrica 2 produtos P1 e P2. O lucro por unidade de P1 é de 100 u.m. e o lucro unitário de P2 é de 150 u.m. A empresa necessita de 2 horas para fabricar uma unidade de P1 e 3 horas para fabricar uma unidade de P2. O tempo mensal disponível para essas atividades é de 120 horas. As demandas esperadas para os 2 produtos levaram a empresa a decidir que os montantes produzidos de P1 e P2 não devem ultrapassar 40 unidades de P1 e 30 unidades de P2 por mês. Construa o modelo do sistema de produção mensal com o objetivo de maximizar o lucro da empresa.

Variáveis de decisão:

x1 = produção de produto P1
x2 = produção de produto p2

Função objetiva:
Maximizar Z = 100x1 + 150x2 

Restrições:
1) 2x1 + 3x2 <= 120 (restrição de horas)
2) x1 <= 40 (limite de produção de x1)
3) x2 <= 30 (limite de produção de x2)
4) x1, x2 >= 0 (não negatividade)

3 - Um vendedor de frutas pode transportar 800 caixas de frutas para sua região de vendas. Ele necessita transportar 200 caixas de laranjas a 20 u.m. de lucro por caixa, pelo menos 100 caixas de pêssegos a 10 u.m. de lucro por caixa, e no máximo 200 caixas de tangerinas a 30 u.m. de lucro por caixa. De que forma deverá ele carregar o caminhão para obter o lucro máximo? Construa o modelo do problema.

Variáveis de decisão:
x1 = caixas de laranja
x2 = caixas de pessego
x3 caixa de tangerina

Função objetiva:
Maximizar Z = 20x1 + 10x2 + 30x3 

Restrições:
1) x1 + x2 +x3 <= 800 (máximo de caixas que podem ser transportadas)
2) x1 = 200 (necessidade de transporte de caixas de laranja)
3) x2 >= 100 (pelo menos 100 caixas de pêssego)
4) x3 <= 200 (no máximo 200 caixas de tangerina)
5) x1, x2, x3 >= 0 (não negatividade)

4 - Uma rede de televisão local tem o seguinte problema: foi descoberto que o programa "A" com 20 minutos de música e 1 minuto de propaganda chama a atenção de 30.000 telespectadores, enquanto o programa "B", com 10 minutos de música е 1 minuto de propaganda chama a atenção de 10.000 telespectadores. No decorrer de uma semana, o patrocinador insiste no uso de no mínimo, 5 minutos para sua propaganda e que não há verba para mais de 80 minutos de música. Quantas vezes por semana cada programa deve ser levado ao ar para obter o número máximo de telespectadores? Construa o modelo do sistema.

Variáveis de decisão:
x1 = Exibição por semana do Programa A
x2 = Exibição por semana do Programa B

Função objetiva:
Maximizar Z = 30.000x1 + 10.000x2 

Restrições:
1) 20x1 + 10x2 <= 80
2) 1x1 + 1x2 >= 5
5) x1, x2 >= 0 (não negatividade)

5 - Um empresa fabrica 2 modelos de cintos de couro. O modelo M1, de melhor qualidade, requer o dobro do tempo de fabricação em relação ao modelo M2. Se todos os cintos fossem do modelo M2, a empresa poderia produzir 1.000 unidades por dia. A disponibilidade de couro permite fabricar 800 cintos de ambos os modelos por dia. Os cintos empregam fivelas diferentes, cuja disponibilidade diária é de 400 para M1 e 700 para M2. Os lucros unitários são de $ 4,00 para M1 e $ 3,00 para M2. Qual o programa ótimo de produção que maximiza o lucro total diário da empresa? Construa, o modelo do sistema descrito.

Variáveis de decisão:
x1 = Produção diária de M1
x2 = Produção diária de M2 

Função objetiva:
Maximizar Z = 4x1 3x2

Restrições:
1) x1 <= 400 (disponibilidade de fivelas para M1)
2) x2 <= 700 (disponibilidade de fivelas para M2)
3) x1 + x2 <= 800 (disponibilidade de couro)
4) 2x1 + x2 <= 1000 (capacidade de produção por dia)
5) x1, x2 >= 0 (não negatividade)

6 - Uma empresa, após um processo de racionalização de produção, ficou com disponibilidade de 3 recursos produtivos, R1, R2 e R3. Um estudo sobre o uso desses recursos indicou a possibilidade de se fabricar 2 produtos P1 e P2. Levantando os custos e consultando o departamento de vendas sobre o preço de colocação no mercado, verificou-se que P1 daria um lucro de $ 120,00 por unidade e Р2, $ 150,00 por unidade. O departamento de produção forneceu a seguinte tabela de uso de recursos.

| Produto                             | Recurso R1 por unidade | Recurso R2 por unidade | Recurso R3 por unidade |
|-------------------------------------|------------------------|------------------------|------------------------|
| P1                                  | 2                      | 3                      | 5                      |
| P2                                  | 4                      | 2                      | 3                      |
| Disponibilidade de recursos por mês | 100                    | 90                     | 120                    |

Que produção mensal de P1 e P2 traz o maior lucro para a empresa? Construa о modelo do sistema.

Variáveis de decisão:
x1 = Produção de P1 por mês
x2 = Produção de P2 por mês

Função objetiva:
Maximizar Z = 120x1 + 150x2 

Restrições:
1) 2x1 + 4x2 <= 100 (recurso R1 por unidade)
2) 3x1 + 3x2 <= 90 (recurso R2 por unidade)
3) 5x1 + 3x2 <= 120 (recurso R3 por unidade)
4) x1, x2 >= 0 (não negatividade)

7 - Um fazendeiro está estudando a divisão de sua propriedade nas seguintes atividades produtivas: 

A (Arrendamento) - Destinar certa quantidade de alqueires para a plantação de cana-de-açúcar, a uma usina local, que se encarrega da atividade e paga pelo aluguel da terra $ 300,00 por alqueire por ano.

P (Pecuária) - Usar outra parte para a criação de gado de corte. A recuperação das pastagens requer adubação (100 kg/Alq) e irrigação (100.000 I de água/Alq) por ano. O lucro estimado nessa atividade é de $ 400,00 por alqueire por ano.

S (Plantio de Soja) - Usar uma terceira parte para o plantio de soja. Essa cultura requer 200 kg por alqueire de adubos e 200.000 I de água/Alq para irrigação por ano. O lucro estimado nessa atividade é de $ 500,00/alqueire no ano. 

Disponibilidade de recursos por ano:
- 12.750.000 I de água
- 14.000 kg de adubo
- 100 alqueires de terra.

Quantos alqueires deverá destinar a cada atividade para proporcionar o melhor
retorno? Construa o modelo de decisão.

Variáveis de decisão:
x1 = Atividade produtiva A (Arrendamento)
x2 = Atividade produtiva P (Pecuária)
x3 = Atividade produtiva S (Plantio de Soja)

Função objetiva:
Maximizar Z = 300x1 + 400x2 + 500x3

Restrições:
1) 100.000x2 + 200.000x3 <= 12.750.000 (restrição de água)
2) 100x1 + 200x2 <= 14.000 (restrição de adubo)
3) x1 + x2 + x3 <= 100 (restrição de alqueires)
4) x1, x2, x3 >= 0 (não negatividade)

8 - O departamento de marketing de uma empresa estuda a forma mais econômica de aumentar em 30% as vendas de seus dois produtos P1 е P2. As alternativas são:

a) Investir em um programa institucional com outras empresas do mesmo ramo. Esse programa requer um investimento mínimo de $ 3.000,00 e deve proporcionar um aumento de 3% nas vendas de cada produto, para cada $ 1.000,00 investidos.

b) Investir diretamente na divulgação dos produtos. Cada $ 1.000,00 investidos em P1 retornam um aumento de 4% nas vendas, enquanto que para P2 o retorno é de 10%.

A empresa dispõe de $ 10.000,00 para esse empreendimento. Quanto deverá
destinar a cada atividade? Construa o modelo do sistema descrito.

Variáveis de decisão:
x1 = Valor (em milhares de R$) investido no programa institucional (Alternativa a).

x2 = Valor (em milhares de R$) investido na divulgação direta de P1 (Alternativa b).

x3 = Valor (em milhares de R$) investido na divulgação direta de P2 (Alternativa b).

Função objetiva:
Minimizar Z = x1 + x2 + x3

Restrições:
1) 3x1 + 4x2 >= 30 (retorno de investimento com meta mínima de P1)
2) 3x1 + 10x3 >= 30 (retorno de investimento com meta mínima de P2)
2) x1 + x2 + x3 <= 10 (orçamento total)
3) x1 >= 3 (investimento minimo na opção A)
4) x2 >= 0, x3 >= 0 (não negatividade)