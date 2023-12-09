#include <stdio.h>

void decimal_binario(int numero);

void main() {
    int numeroDecimal;
    scanf("%d", &numeroDecimal);
    decimal_binario(numeroDecimal);
}

void decimal_binario(int numero) {
    int binario[32];
    int i = 0;
    while (numero > 0) {
        if (numero % 2 == 1) {
            binario[i] = 1;
        } else {
            binario[i] = 0;
        }
        numero = numero / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
}