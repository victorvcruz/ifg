
typedef struct produto {
    int codigo;
    char nome[50];
    float preco;
} Produto;

Produto * criarProduto();

void exibirProduto(Produto * p);