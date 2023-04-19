#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randomNumber, whileCondition, number, aux;
    randomNumber = rand() % 10;

    whileCondition = 1;
    while (whileCondition == 1)
    {
        printf("INSIRA UM NUMERO:\n");
        scanf("%d", &number);
        if (number == randomNumber) {
            printf("Parabéns, você acertou, gostaria de tentar novamente?\n1 - Sim, 2-Não.\n");
            scanf("%d", &aux);
            if(aux == 1) {
                randomNumber = rand() % 10;
            } else {
                whileCondition = 0;
                break;
            }
        } else if(number > randomNumber) {
            printf("Número escolhido é menor\n");
        } else if(number < randomNumber) {
            printf("Número escolhido é maior\n");
        }
    }
    
}

