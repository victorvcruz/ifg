#include <stdio.h>

int obterValor(int n);

int main() {
    int posicao;

    printf("Digite a posição do termo na série: ");
    scanf("%d", &posicao);

    if (posicao > 0) {
        int valor = obterValor(posicao);
        printf("O valor na posição %d é %d.\n", posicao, valor);
    } else {
        printf("A posição deve ser um número positivo.\n");
    }

    return 0;
}

int obterValor(int n) {
    if (n == 1) {
        return 5;
    } else {
        return obterValor(n - 1) + 5; 
    }
}
