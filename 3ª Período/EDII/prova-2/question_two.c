#include <stdio.h>

int h1(int k);
int h2(int k);
void insere(int tabela[], int k);
int busca(int tabela[], int k, int *valorHash, int *tamanhoPasso, int *celulasExploradas, int *statusBusca);

int main()
{
    int tabela[15];
    for (int i = 0; i < 15; i++)
    {
        tabela[i] = -1;
    }
    
    int valores[] = {51, 85, 4, 39, 24, 19, 27, 46, 38, 11, 32};
    int numValores = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < numValores; i++)
    {
        insere(tabela, valores[i]);
    }

    printf("Tabela Hash Atualizada:\n");
    for (int i = 0; i < 15; i++)
    {
        if (tabela[i] == -1)
        {
            printf("* ");
        }
        else
        {
            printf("%d ", tabela[i]);
        }
    }
    printf("\n\n");

    int buscaValores[] = {38, 78, 24, 7, 51};
    int numBuscaValores = sizeof(buscaValores) / sizeof(buscaValores[0]);

    for (int i = 0; i < numBuscaValores; i++)
    {
        int valorHash, tamanhoPasso, celulasExploradas = 0;
        int statusBusca;
        int pos = busca(tabela, buscaValores[i], &valorHash, &tamanhoPasso, &celulasExploradas, &statusBusca);

        printf("N° do Item: %d\n", i + 1);
        printf("Busca: %d\n", buscaValores[i]);
        printf("Valor do Hash: %d\n", valorHash);
        printf("Tamanho do Passo: %d\n", tamanhoPasso);

        printf("Células na Sequência de Exploração: ");
        if (celulasExploradas > 0)
        {
            printf("[");
            for (int j = 0; j < celulasExploradas; j++)
            {
                printf("%d", (valorHash + j * tamanhoPasso) % 15);
                if (j < celulasExploradas - 1)
                {
                    printf(", ");
                }
            }
            printf("]");
        }
        else
        {
            printf("[]");
        }

        printf("\n");
        printf("Status da Busca: %s\n", statusBusca == 1 ? "Encontrado" : "Não Encontrado");
        printf("\n");
    }

    return 0;
}

int h1(int k)
{
    return k % 15;
}

int h2(int k)
{
    return 5 - (k % 5);
}

int busca(int tabela[], int k, int *valorHash, int *tamanhoPasso, int *celulasExploradas, int *statusBusca)
{
    *valorHash = h1(k);
    *tamanhoPasso = h2(k);
    int i = *valorHash;
    int passo = *tamanhoPasso;
    int tentativas = 0;
    *celulasExploradas = 0;

    while (tabela[i] != -1 && tentativas < 15)
    {
        (*celulasExploradas)++;
        if (tabela[i] == k)
        {
            *statusBusca = 1;
            return i;
        }
        i = (i + passo) % 15;
        tentativas++;
    }

    *statusBusca = 0;
    return -1;
}

void insere(int tabela[], int k)
{
    int valorHash = h1(k);
    int tamanhoPasso = h2(k);
    int i = valorHash;
    int passo = tamanhoPasso;
    int tentativas = 0;

    while (tabela[i] != -1 && tentativas < 15)
    {
        i = (i + passo) % 15;
        tentativas++;
    }

    tabela[i] = k;
}