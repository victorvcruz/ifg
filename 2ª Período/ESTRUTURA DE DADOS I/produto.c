# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "produto.h"
# define MAX 5

int main() {
    Produto *p = criarProduto();
    exibirProduto(p);
}

Produto * criarProduto() {
    Produto * p = (Produto *) malloc(sizeof(Produto));
    if (p == NULL) {
        printf("Não foi possível alocar a memória\n");
        exit(1);
    }
    printf("Digite o nome: ");
    scanf("%s", p->nome);
    
    printf("Digite o codigo: ");
    scanf("%d", &p->codigo);
    
    printf("Digite o preco: ");
    scanf("%f", &p->preco);

    return p;
}

void exibirProduto(Produto * p) {
    printf("\n------PRODUTO------\n");
    printf("NOME: %s\n", p->nome);
    printf("CODIGO: %d\n", p->codigo);
    printf("PRECO: %.2f\n", p->preco);
    return;
}