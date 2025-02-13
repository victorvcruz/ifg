#include <stdio.h>

int buscaSequencial(int vetor[], int n, int x);

int main() {
    int vetor[] = {4, 2, 8, 5, 1, 7, 3, 9, 10, 6};

    int resultado = buscaSequencial(vetor, 10, 5);

    if (resultado != -1) {
        printf("Encontrado na posição %d.\n", resultado);
    } else {
        printf("Não encontrado.\n");
    }
}

int buscaSequencial(int vetor[], int n, int x) {
    if (n == 0) {
        return -1; 
    }

    if (vetor[n - 1] == x) {
        return n - 1;  
    }

    return buscaSequencial(vetor, n - 1, x);
}

