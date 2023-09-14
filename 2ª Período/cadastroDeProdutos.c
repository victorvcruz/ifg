#include <stdio.h>
#include "./produto.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  Produto *p;
  p = criaProduto();
  exibeProduto(p);

  return 0;
}

Produto *criaProduto()
{

  char nome[50]; // Max 50

  int n;

  Produto *p = (Produto *)malloc(sizeof(Produto));

  if (p == NULL)
  {
    printf("OS não disponibilizou memoria :(");
    exit(1);
  }
  printf("Entre com o código do produto: ");
  scanf_s("%d", &p->codigo);
  printf("Entre o nome do produto: ");
  fflush(stdin);
  fgets(nome, 50, stdin);
  n = striplex(nome);
  p->nome = (char *)malloc(sizeof(char) * n);
  strcpy(p->nome, nome);
  printf("Entre com a qauntidade de estoque do produto: ");
  scanf_s("%d", &p->quantidade_no_estoque);
  printf("Entre com o preço do produto: ");
  scanf_s("%d", &p->preco);
  fflush(stdin);
  printf("Entre com a quantidade vendida do produto: ");
  scanf("%d", &p->quantidade_vendidos);

  return p;
}

void exibeProduto(Produto *prod)
{
  printf("\nCódigo:%08d \nNome:%s \nQuantidade em estoque:%d \nValor:%.2f \nQuantidade de vendas: %d", prod->codigo, prod->nome, prod->quantidade_no_estoque, prod->preco, prod->quantidade_vendidos);
}

int striplex(char *nome)
{
  char *p;
  int i = 0;
  p = nome;
  while (i < strlen(nome))
  {
    if ((*p == '\n' || *p == '\0'))
    {
      *p = '\0';
      break;
    }
    p++;
  }
  return i;
}