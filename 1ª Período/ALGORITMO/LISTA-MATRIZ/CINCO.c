#include <stdio.h>

void exibirMatriz(int matriz[][5], int linhas, int colunas) {
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
    int valorLinha, valorColuna, valor = 0, encontrado = 0;
    int matriz[5][5];

    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++){
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("VALOR A SER ECONTRADO: ");
    scanf("%d", &valor);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(matriz[i][j] == valor) {
                valorLinha = i;
                valorColuna = j;
                encontrado = 1;
            }        
        }
    }

    exibirMatriz(matriz, 5, 5);
    if(encontrado == 1) {
        printf("\nLOCALIZAÇÃO DO VALOR LINHA %d E COLUNA %d", valorLinha, valorColuna);
    } else {
        printf("nao encontrado");
    }

}

