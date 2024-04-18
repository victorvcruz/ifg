#include <stdio.h>

int binary_search_insert(int list[], int size, int key);

void insert_ordered(int list[], int *size, int key);

void show(int list[], int size);

int main() {
    int list[10] = {0};
    int size = 0;

    while (size < 10) {
        int key;
        printf("Insira registro:");
        scanf("%d", &key);

        insert_ordered(list, &size, key);

        show(list, size);
    }

    return 0;
}

int binary_search_insert(int list[], int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (list[middle] == key) {
            return middle;
        } else if (list[middle] < key) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return left;
}

void insert_ordered(int list[], int *size, int key) {
    int position = binary_search_insert(list, *size, key);

    for (int i = *size; i > position; i--) {
        list[i] = list[i - 1];
    }

    list[position] = key;
    (*size)++;
}

void show(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

/*
Explicação:
- A função binary_search_insert é usada para realizar uma busca binária na lista e encontrar a posição correta para inserir o novo elemento.
- A função insert_ordered insere um novo elemento na lista ordenada usando a posição encontrada pela busca binária.
- A função show é usada para exibir a lista atualizada.
- Há a solicitação da inserção de números, o mesmo que insere esse número na lista de forma ordenada até que a lista atinja o tamanho máximo de 10 elementos.

Complexidade:
- A busca binária na função binary_search_insert tem complexidade de tempo O(log n).
- A inserção de um novo elemento na função insert_ordered tem complexidade de tempo O(n) porque os elementos após a posição de inserção precisam ser movidos para criar espaço para o novo elemento.
- A complexidade total de inserir um elemento de forma ordenada é O(log n) para a busca binária mais O(n) para a inserção, resultando em uma complexidade total de O(n).
*/
