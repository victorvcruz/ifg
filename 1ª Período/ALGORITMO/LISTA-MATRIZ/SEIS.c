#include <stdio.h>

void exibirMatriz(int matriz[][4], int linhas, int colunas) {
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
    int matrizUm[4][4];
    int matrizDois[4][4];
    int matrizMaior[4][4];

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            printf("matrizUm[%d][%d]", i, j);
            scanf("%d", &matrizUm[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            printf("matrizDois[%d][%d]", i, j);
            scanf("%d", &matrizDois[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            if(matrizUm[i][j] >= matrizDois[i][j]) {
                matrizMaior[i][j] = matrizUm[i][j];
            } else {
                matrizMaior[i][j] = matrizDois[i][j];
            }
        }
    }

    printf("MATRIZ UM:");
    exibirMatriz(matrizUm, 4, 4);

    printf("MATRIZ DOIS:");
    exibirMatriz(matrizDois, 4, 4);

    printf("MATRIZ MAIOR:");
    exibirMatriz(matrizMaior, 4, 4);
}

