#include <stdio.h>
int main() {
    int numeroUm, numeroDois, numeroTres, numeroQuatro, aux;
    int ordem;

    scanf("%d%d%d%d", &numeroUm, &numeroDois, &numeroTres, &numeroQuatro);

    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (numeroUm > numeroDois) {
                aux = numeroUm;
                numeroUm = numeroDois;
                numeroDois = aux;
            }
            if (numeroDois > numeroTres) {
                aux = numeroDois;
                numeroDois = numeroTres;
                numeroTres = aux;
            }
            if (numeroTres > numeroQuatro) {
                aux = numeroTres;
                numeroTres = numeroQuatro;
                numeroQuatro = aux;
            }
        }
    }

    printf("Ordenar:\nForma crescente = 1\nForma decrescente = 2\n");
    scanf("%d", &ordem);

    if (ordem == 1) {
        printf("%d %d %d %d\n", numeroUm, numeroDois, numeroTres, numeroQuatro);
    } else if (ordem == 2) {
        printf("%d %d %d %d\n", numeroQuatro, numeroTres, numeroDois, numeroUm);
    } else {
        printf("Ordem inválida.\n");
    }
}