#include <stdio.h>
int main()
{
    int whileCondition, number, somatorio, maior, menor, qntd;
    float media;
    
    maior = 0;
    menor =0;
    somatorio =0;
    qntd = 0;
    whileCondition = 1;
    while (whileCondition == 1)
    {
        scanf("%d", &number);
        if (number == 0) {
            whileCondition = 0;
            break;
        }

        if (number > maior) {
            maior = number;
        }

        if (number < menor || menor == 0) {
            menor = number;
        }

        qntd++;
        somatorio = somatorio + number;
    }
    

    media = somatorio/qntd;
    printf("A) a quantidade de número digitados: %d\n", qntd);
    printf("B) O somatório desses números: %d\n", somatorio);
    printf("O maior e o menor número: %d e %d\n", maior, menor);
    printf("E a média aritmética simples: %f\n", media);
}

