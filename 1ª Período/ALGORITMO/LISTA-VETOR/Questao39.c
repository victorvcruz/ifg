#include <stdio.h>

int fatorial(int valor){
    if(valor == 0) {
        return 1;
    }
    int fatorial = 1;
    for(int i = valor; i > 0; i--) {
        fatorial = fatorial * i;
    }
    return fatorial;
}

int main() {
    int linhas;
    float aux;
    scanf("%d", &linhas);

    for(int n = 0; n < linhas; n++) {
        for(int p = 0; p < n+1; p++) {
            printf("%d ", fatorial(n)/(fatorial(p) * fatorial(n-p)));
        }
        printf("\n");
    }
}