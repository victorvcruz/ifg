#include<stdio.h>

int main(){
    int vetor[10], aux;

    for(int i = 0; i < 10; i++) {
        printf("vetor[%d]:", i);
        scanf("%d", &vetor[i]); 
    }

    for(int i = 0; i < 10 - 1; i++) {
        for(int j = 0; j < 10 - 1; j++){
            if(vetor[j] > vetor[j + 1]) {
                aux = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = aux; 
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }
}