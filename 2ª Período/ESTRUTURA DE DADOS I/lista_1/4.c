#include <stdio.h>

void fibonacci(int n);

void main() {
    int numero;
    scanf("%d", &numero);
    fibonacci(numero);
}

void fibonacci(int n) {
    int termo1 = 0, termo2 = 1, proximo;
    for (int i = 1; i <= n; ++i) {
        printf("%d ", termo1);
        proximo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo;
    }
    printf("\n");
}
