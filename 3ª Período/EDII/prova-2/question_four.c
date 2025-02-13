#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Lista {
    int valor;
    struct Lista *proximo;
} Lista;

typedef struct TabelaHash {
    Lista *tabela[10];
} TabelaHash;

Lista *criaLista(int valor);
int hash(int valor);
void insere(TabelaHash *tabela, int valor);
int busca(TabelaHash *tabela, int valor);
void removeValor(TabelaHash *tabela, int valor);
void imprimeTabela(TabelaHash *tabela);
void inicializaTabela(TabelaHash *tabela);

int main() {
    TabelaHash tabela;
    inicializaTabela(&tabela);

    int opcao, valor;

    do {
        printf("Escolha a operação\n");
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Buscar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Você escolheu a opção 1, escolha um valor: ");
            scanf("%d", &valor);
            insere(&tabela, valor);
            printf("Tabela Hash após inserção:\n\n");
            imprimeTabela(&tabela);
            printf("\n");
            sleep(1);
            break;

        case 2:
            printf("Você escolheu a opção 2, escolha um valor: ");
            scanf("%d", &valor);
            removeValor(&tabela, valor);
            printf("Tabela Hash após remoção:\n\n");
            imprimeTabela(&tabela);
            printf("\n");
            sleep(1);
            break;

        case 3:
            printf("Você escolheu a opção 3, escolha um valor: ");
            scanf("%d", &valor);
            if (busca(&tabela, valor)) {
                printf("Valor %d encontrado.\n", valor);
            } else {
                printf("Valor %d não encontrado.\n", valor);
            }
            sleep(1);
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}

int hash(int valor) {
    return valor % 10;
}

Lista *criaLista(int valor) {
    Lista *novoLista = (Lista *)malloc(sizeof(Lista));
    novoLista->valor = valor;
    novoLista->proximo = NULL;
    return novoLista;
}

void inicializaTabela(TabelaHash *tabela) {
    for (int i = 0; i < 10; i++) {
        tabela->tabela[i] = NULL;
    }
}

void insere(TabelaHash *tabela, int valor) {
    int indice = hash(valor);
    Lista *novoLista = criaLista(valor);
    novoLista->proximo = tabela->tabela[indice];
    tabela->tabela[indice] = novoLista;
}

int busca(TabelaHash *tabela, int valor) {
    int indice = hash(valor);
    Lista *atual = tabela->tabela[indice];
    while (atual != NULL) {
        if (atual->valor == valor) {
            return 1;
        }
        atual = atual->proximo;
    }
    return 0;
}

void removeValor(TabelaHash *tabela, int valor) {
    int indice = hash(valor);
    Lista *atual = tabela->tabela[indice];
    Lista *anterior = NULL;

    while (atual != NULL) {
        if (atual->valor == valor) {
            if (anterior == NULL) {
                tabela->tabela[indice] = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}

void imprimeTabela(TabelaHash *tabela) {
    for (int i = 0; i < 10; i++) {
        Lista *atual = tabela->tabela[i];
        printf("Índice %d:", i);
        while (atual != NULL) {
            printf(" %d", atual->valor);
            atual = atual->proximo;
        }
        printf("\n");
    }
}