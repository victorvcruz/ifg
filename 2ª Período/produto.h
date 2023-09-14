#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct produto
{
  int codigo;
  char *nome; // Max 50
  int quantidade_no_estoque;
  float preco;
  int quantidade_vendidos;
} Produto;

/*
 Entrada:
 Saída: *Produto
 */
Produto *criaProduto();

int striplex(char *nome);

/*
  Entrada: Produto *prod
  Saída:
 */
void exibeProduto(Produto *prod);

#endif
