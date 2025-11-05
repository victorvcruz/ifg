## Exercício Avenger Problem

Varíaveis

x1 = Quantidade de ataques de Dr. Stephen Strange
x2 = Quantidade de ataques de Iron Man
x3 = Quantidade de ataques de Thor
x4 = Quantidade de ataques de Captain America
x5 = Quantidade de ataques de Black Widow
x6 = Quantidade de ataques de Spider Man
x7 = Quantidade de ataques de Star-Lord

Função Objetiva:
Maximizar Z = 24x1 + 21x2+ 30x3 + 13x4 + 8x5 + 18x6 + 6x7

Restrições:

1) 22x1 + 20x2 + 25x3 + 10x4 + 19x5 + 24x6 + 14x7 <= 120 (tempo disponível de 20 minutos de ataque)
2) x6 >= 5 (spider-man precisa atacar no minimo 5 vezes)
3) x3 <= 6 (thor não pode atacar mais que 6 vezes)
4) x1 <= x2 (quantidade de ataques de Dr. Stephen Strange não pode ser maior que o dobro de ataque de Iron Man)
5) x4 + x5 + x2 + x7 > x3 + x1 (quantidade de ataques de Captain America, Black Widow, Iron Man, e Star Lord não pode ser menos que a soma de ataque de Thor e Dr. Stephen Strange)
6) 33x1 <= 250 (gasto de energia por ataque de Dr. Stephen Strange)
7) 21x2 <= 200 (gasto de energia por ataque de Iron Man)
8) 35x3 <= 300 (gasto de energia por ataque de Thor)
9) 13x4 <= 130 (gasto de energia por ataque de Captain America)
10) 11x5 <= 90 (gasto de energia por ataque de Black Widow)
11) 18x6 <= 120 (gasto de energia por ataque de Spider Man)
12) 7x7 <= 50 (gasto de energia por ataque de Star-Lord)
13) x1,x2,x3,x4,x5,x6,x7 >= 0