#include <stdio.h>
int main()
{
    int numero = 0, qntdPares = 0, somaPares = 0, aux = 1;
    float media;

    while (aux == 1)
    {
        printf("Digite um número maior que 50 e menor do que 1000\n");
        scanf("%d", &numero);    
        if(numero > 50 && numero < 1000) {
            aux = 0;
            break;
        }
    }

    for(int i = 1; i < numero; i++){
        if (i % 2 == 0){
            printf("%d ", i);
            qntdPares++;
            somaPares = somaPares + i;
        }
    }

    media = somaPares/qntdPares;
    printf("\nMEDIA: %.2f\n", media);
}