# Problema dos Vingadores

## Descrição
Problema de otimização para determinar a quantidade ideal de ataques de cada herói dos Vingadores para maximizar o dano total dentro das restrições de tempo e energia.

## Variáveis de Decisão
- **x₁** = quantidade de ataques de Dr. Stephen Strange
- **x₂** = quantidade de ataques de Iron Man
- **x₃** = quantidade de ataques de Thor
- **x₄** = quantidade de ataques de Captain America
- **x₅** = quantidade de ataques de Black Widow
- **x₆** = quantidade de ataques de Spider-Man
- **x₇** = quantidade de ataques de Star-Lord

## Função Objetivo
**Maximizar:** Z = 24x₁ + 21x₂ + 30x₃ + 13x₄ + 8x₅ + 18x₆ + 6x₇

## Restrições

### Restrições de Tempo e Estratégia
1. **Tempo disponível:** 22x₁ + 20x₂ + 25x₃ + 10x₄ + 19x₅ + 24x₆ + 14x₇ ≤ 120
2. **Mínimo Spider-Man:** x₆ ≥ 5
3. **Máximo Thor:** x₃ ≤ 6
4. **Relação Strange-Iron Man:** x₁ ≤ x₂
5. **Estratégia conjunta:** x₄ + x₅ + x₂ + x₇ ≥ x₃ + x₁

### Restrições de Energia por Herói
6. **Dr. Stephen Strange:** 33x₁ ≤ 250
7. **Iron Man:** 21x₂ ≤ 200
8. **Thor:** 35x₃ ≤ 300
9. **Captain America:** 13x₄ ≤ 130
10. **Black Widow:** 11x₅ ≤ 90
11. **Spider-Man:** 18x₆ ≤ 120
12. **Star-Lord:** 7x₇ ≤ 50

### Não Negatividade
13. **Todas as variáveis:** x₁, x₂, x₃, x₄, x₅, x₆, x₇ ≥ 0