#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct Pilha {
    char valor;
    struct Pilha *prox;
} pilha;

void empilhar(pilha **topo, char c);

char desempilhar(pilha **topo);

void inverter(char frase[]);

void main() {
    char frase[100];

    printf("frase:");

    scanf("%s", frase);

    printf("inversao:");

    inverter(frase);
}

void empilhar(pilha **topo, char c) {
    pilha *novo = (pilha *)malloc(sizeof(pilha));
    novo->valor = c;
    novo->prox = *topo;
    *topo = novo;
}

char desempilhar(pilha **topo) {
    pilha *temp = *topo;
    *topo = (*topo)->prox;
    char valor = temp->valor;
    free(temp);
    return valor;
}

void inverter(char frase[]) {
    pilha *pilhaPalavras = NULL;

    int tamanho = strlen(frase);
    for (int i = 0; i < tamanho; ++i) {
        if (!isspace(frase[i])) {
            empilhar(&pilhaPalavras, frase[i]);
        } else {
            while (pilhaPalavras != NULL) {
                printf("%c", desempilhar(&pilhaPalavras));
            }
            printf(" ");
        }
    }
    while (pilhaPalavras != NULL) {
        printf("%c", desempilhar(&pilhaPalavras));
    }
}