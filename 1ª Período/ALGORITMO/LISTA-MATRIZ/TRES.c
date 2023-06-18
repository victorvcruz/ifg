#include <stdio.h>

void exibirMatriz(int matriz[][4], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("\n|");
        for (int j = 0; j < colunas; j++) {
            printf("  %d  |", matriz[i][j]);
        }
    }
}

int main()
{
    int linhas = 4, colunas = 4;
    int matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = i * j;
        }
    }

    exibirMatriz(matriz, linhas, colunas);
}

