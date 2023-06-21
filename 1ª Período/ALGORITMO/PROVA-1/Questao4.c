#include <stdio.h>
int main() {
    int inicio, fim, qntdPrimos = 0, somaPrimos = 0, aux = 1;
    float media;

    while (aux == 1)
    {
        printf("Digite o início da contagem, com um número maior que 4 e menor do que 100\n");
        scanf("%d", &inicio);    
        if(inicio > 4 && inicio < 100) {
            aux = 0;
            break;
        }
    }

    aux = 1;
    while (aux == 1)
    {
        printf("Digite o fim da contagem, com um menor do que 1000\n");
        scanf("%d", &fim);    
        if(fim < 1000) {
            aux = 0;
            break;
        }
    }

    for(int i = inicio; i < fim; i++){
        aux = 1;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                aux = 0;
                break;
            }
        }
        if (aux == 1) {
            printf("%d ", i);
            qntdPrimos++;
            somaPrimos = somaPrimos + i;
        }
    }

    media = somaPrimos/qntdPrimos;
    printf("\nMEDIA: %.2f\n", media);
}