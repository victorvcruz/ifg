#include <stdio.h>

void exibirMatriz(int matriz[][5], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("\n|");
        for (int j = 0; j < colunas; j++) {
            printf("  %d  |", matriz[i][j]);
        }
    }
}

int main()
{

    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++){
            if(i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    exibirMatriz(matriz, 5, 5);
}

