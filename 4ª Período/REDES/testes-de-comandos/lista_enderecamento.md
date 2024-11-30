# LISTA DE EXERCÍCIOS ENDEREÇAMENTO

## 1) Nos endereços abaixo diga qual deles é um endereço IP válido ou inválido.

192.168.0.1: Válido
192.168.256.10.1: Inválido
10.0.1: Inválido
172.16.0.1: Válido
10.9.0.300 : Inválido
222.222.222.222: Válido

## 2) Dado os Ip’s abaixo, indique a qual classes eles pertencem, bem como se é público ou
privado.

10.9.0.44 -  Classe A - Privado
200.217.235.80 -  Classe C - Privado
127.255.0.128 -  Classe B - Público
172.30.115.254 - Classe B - Público
205.208.33.1 - Classe C - Público
8.15.32.1 - Classe A - Público
192.168.0.20 - Classe C - Privado
192.169.0.33 - Classe C - Público

## 3) Quantos hosts de um endereço classe B são permitidos por sub-rede se a máscara usada for 255.255.255.192? E para a máscara 255.255.255.252?
255.255.255.192
11111111.11111111.11111111.11000000
32−26=6
2^6 −2 = 62 

255.255.255.252
11111111.11111111.11111111.11111100
32 - 30 = 2
2^2 = 2


## 4) Qual a máscara em contagem de bits adequada para se alocar 5000 hosts? E 2000? Justifique sua resposta.

5000: 11111111.11110000.00000000.00000000
2000: 11111111.11000000.00000000.00000000

