#include <stdio.h>

float novo_preco(float preco, float reajuste);

void main() {
    float preco, reajuste;

    printf("preco atual: ");
    scanf("%f", &preco);

    printf("percentual de reajuste: ");
    scanf("%f", &reajuste);

    printf("novo preco: R$ %.2f\n", novo_preco(preco, reajuste));
}

float novo_preco(float preco, float reajuste) {
    return preco + (preco * reajuste / 100);;
}
