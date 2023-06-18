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
    int linhas = 4, colunas = 4, maiorValorLinha, maiorValorColuna, maior = 0;;
    int matriz[linhas][colunas];

    for (int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++){
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                maiorValorLinha = i;
                maiorValorColuna = j;
            }
        }
    }

    exibirMatriz(matriz, linhas, colunas);
    printf("LOCALIZAÇÃO DO MAIOR VALOR LINHA %d E COLUNA %d", maiorValorLinha, maiorValorColuna);
}

