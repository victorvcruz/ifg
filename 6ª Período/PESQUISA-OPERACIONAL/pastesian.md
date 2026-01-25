# Pastesian 

Pastesian is a family-owned pasta factory that is currently planning the production of lasagnas for the next 4 months.

Lasagnas are prepared and immediately frozen for distribution. They have some freezers in the factory where they can store inventory for several weeks before shipping them to the market.

Based on previous years’ selling, Pastesian expects demand of 200, 350, 150, and 250 lasagnas for months 1, 2, 3, and 4, respectively, which must be met exactly. Currently, Pastesian has only 50 lasagnas in inventory.

One tricky thing is that labor cost is going to increase over the next months because the factory is located in a tourist town where there are lots of temporary job opportunities during high season. This translates into a variable production cost of $5.50, $7.20, $8.80, and $10.90 dollars per lasagna for months 1, 2, 3, and 4, respectively.

In addition, electricity charges also vary throughout the season. As a result, the cost for keeping one lasagna in inventory from month 1 to 2 is $1.30, from month 2 to 3 is $ 1.95, and from month 3 to 4 is $2.20.

How should Pastesian plan its operations for these upcoming months assuming that it will end the season with no lasagna in inventory?

Additional Complexities
After analyzing the prescribed optimal solution, the Pastesian people realized that they would not be able to implement it for the following reasons.

Store capacity: Currently, Pastesian doesn't have the capacity to store more than 200 lasagnas from one month to another.

Production capacity: Pastesian has the capacity to produce at most 400 lasagnas each month. In fact, they would rather keep their monthly production under 300, because to produce more than 300, they need to use extra equipment which translates into an additional cost of $0.35 per lasagna.

## Variáveis de Decisão
- x1 = número de lasanhas produzidas no mês 1
- x2 = número de lasanhas produzidas no mês 2
- x3 = número de lasanhas produzidas no mês 3
- x4 = número de lasanhas produzidas no mês 4

## Função Objetivo
- Minimizar Z = x1 * (5.50) + s1 * (1.30) + x2 * (7.20) + s2 * (1.95) + x3 * (8.80) + s3 * (2.20) + x4 * (10.90)

## Restrições
- x1 >= 200 - 50 (mínimo de lasanha a produzida no mês 1)
- x2 >= 350 - s1 (mínimo de lasanha a produzida no mês 2)
- x3 >= 150 - s2 (mínimo de lasanha a produzida no mês 3)
- x4 = 250 - s3 (mínimo de lasanha a produzida no mês 4)
- s4 = 0 (não deve haver restante de lasanha do mês 4)
- s1 <= 200 (máximo de capacidade de estoque de um mês para outro)
- s2 <= 200 (máximo de capacidade de estoque de um mês para outro)
- s3 <= 200 (máximo de capacidade de estoque de um mês para outro)
- x1 <= 400 (máximo de produção possível no mês 1)
- x2 <= 400 (máximo de produção possível no mês 2)
- x3 <= 400 (máximo de produção possível no mês 3)
- x4 <= 400 (máximo de produção possível no mês 4)

### Varíaveis Auxiliares
- s1 = x1 + 50 - 200 (número de lasanhas restantes do mês 1)
- s2 = s1 + x1 - 350 (número de lasanhas restantes do mês 2)
- s3 = s2 + x2 - 150 (número de lasanhas restantes do mês 3)
- s4 = s3 + x3 - 250 (número de lasanhas restantes do mês 4)