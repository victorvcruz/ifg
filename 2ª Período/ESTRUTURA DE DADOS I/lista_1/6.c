#include <stdio.h>

int somatorio(int n);

void main() {
    int numero;
    scanf("%d", &numero);
    printf("somatorio = %d\n", somatorio(numero));
}

int somatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; ++i) {
        soma += i;
    }
    return soma;
}