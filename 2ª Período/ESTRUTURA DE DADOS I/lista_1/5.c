#include <stdio.h>

int potencia(int base, int expoente);

void main() {
    int base, expoente;

    printf("base:");
    scanf("%d", &base);

    printf("expoente:");
    scanf("%d", &expoente);


    printf("%d^%d = %d\n", base, expoente, potencia(base, expoente));
}

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }
    return resultado;
}