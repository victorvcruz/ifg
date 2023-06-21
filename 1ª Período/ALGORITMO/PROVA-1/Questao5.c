#include <stdio.h>
int main() {
    int n, enesimoTermo = 1, termoAnterior = 1, termoAtual = 1, proximoTermo;

    scanf("%d", &n);


    if ((n != 1 || n != 2) && n > 2) {
        termoAnterior = 1;
        enesimoTermo = 1;

        for (int i = 3; i <= n; ++i) {
            proximoTermo = termoAnterior + enesimoTermo;
            termoAnterior = enesimoTermo;
            enesimoTermo = proximoTermo;
        }
    }

    printf("O n-esimo termo de Fibonnaci é %d\n", enesimoTermo);
}