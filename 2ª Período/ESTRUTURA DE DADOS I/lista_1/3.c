#include <stdio.h>

void ordem_crescente(char *charUm, char *charDois, char *charTres);

void main() {
    char charUm, charDois, charTres;

    printf("caracteres: ");
    scanf("%c %c %c", &charUm, &charDois, &charTres);

    ordem_crescente(&charUm, &charDois, &charTres);

    printf("ordem crescente: %c, %c, %c\n", charUm, charDois, charTres);
}

void ordem_crescente(char *charUm, char *charDois, char *charTres) {
    char temp;

    if (*charUm > *charDois) {
        temp = *charUm;
        *charUm = *charDois;
        *charDois = temp;
    }
    if (*charUm > *charTres) {
        temp = *charUm;
        *charUm = *charTres;
        *charTres = temp;
    }
    if (*charDois > *charTres) {
        temp = *charDois;
        *charDois = *charTres;
        *charTres = temp;
    }
}
