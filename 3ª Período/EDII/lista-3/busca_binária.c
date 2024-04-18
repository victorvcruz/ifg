#include <stdio.h>

int binary_search(int list[], int size, int key);

void insert(int list[], int *size, int key);

void show(int list[], int size);

int main() {
    int list[100] = {0, 1, 5, 8, 25, 58, 100, 120, 1000};
    int size = 9;
    int key;
    int aux = 0;

    while(aux = 1) {
        printf("Insira registro:");
        scanf("%d", &key);

        if (key == -1) {
            aux = -1;
            printf("Execução finalizada");
            break;
        }

        int index = binary_search(list, size, key);

        if (index != -1) {
            printf("registro existente\n");
        } else {
            insert(list, &size, key);
        }

        show(list, size);
    }

    return 0;
}

int binary_search(int list[], int size, int key) {
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

    return -1;
}

void insert(int list[], int *size, int key) {
    int i = *size - 1;

    while (i >= 0 && list[i] > key) {
        list[i + 1] = list[i];
        i--;
    }

    list[i + 1] = key;
    (*size)++;
}

void show(int list[], int size) {
    printf("Lista atualizada: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}