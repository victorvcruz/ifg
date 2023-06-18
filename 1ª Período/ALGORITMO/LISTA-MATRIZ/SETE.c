#include <stdio.h>

void exibirMatriz(int matriz[][10], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        printf("\n|");
        for (int j = 0; j < colunas; j++) {
            printf("  %d  |", matriz[i][j]);
        }
    }
    printf("\n");
}

int main()
{
    int matriz[10][10];

    for (int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++){
            if(i < j) {
                matriz[i][j] = (2 * i) + (7 * j) - 2;
            } else if(i == j) {
                matriz[i][j] = (3 * (i * i)) -1;
            } else if(i > j) {
                matriz[i][j] = (4 * (i * i * i)) - (5 * (j *j)) + 1;
            }
        }
    }

    exibirMatriz(matriz, 10, 10);
}

