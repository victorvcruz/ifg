#include <stdio.h>

void insertion_sort(int list[], int size);

void check(int list[], int size, int key, int *index, int *count);

void remove_duplicates(int list[], int *size, int key);

void insert(int list[], int *size, int key);

void show(int list[], int size);

int main() {
    int list[10] = {5, 8, 100, 1, 100, 8, 25, 58, 0, 25};
    int size = 10;
    int aux = 1;

    while (aux == 1) {
        insertion_sort(list, size);

        int key;
        printf("Insira registro:");
        scanf("%d", &key);

        if (key == -1) {
            aux = -1;
            printf("Execução finalizada");
            break;
        }

        int index, count;
        check(list, size, key, &index, &count);

        if (index != -1) {
            remove_duplicates(list, &size, key);
        } else {
            insert(list, &size, key);
        }

        show(list, size);
    }

    return 0;
}

void insertion_sort(int list[], int size) {
    for (int i = 1; i < size; i++) {
        int key = list[i];
        int j = i - 1;

        while (j >= 0 && list[j] > key) {
            list[j + 1] = list[j];
            j--;
        }

        list[j + 1] = key;
    }
}

void check(int list[], int size, int key, int *index, int *count) {
    *index = -1;
    *count = 0;

    for (int i = 0; i < size; i++) {
        if (list[i] == key) {
            (*count)++;
            if (*index == -1) {
                *index = i;
            }
        }
    }
}

void remove_duplicates(int list[], int *size, int key) {
    int new_list[*size];
    int new_size = 0;
    int found = 0;

    for (int i = 0; i < *size; i++) {
        if (list[i] == key) {
            if (!found) {
                new_list[new_size] = list[i];
                new_size++;
                found = 1;
            }
        } else {
            new_list[new_size] = list[i];
            new_size++;
        }
    }

    for (int i = 0; i < new_size; i++) {
        list[i] = new_list[i];
    }

    *size = new_size;
}

void insert(int list[], int *size, int key) {
    int position = 0;
    while (position < *size && list[position] < key) {
        position++;
    }

    for (int i = *size; i > position; i--) {
        list[i] = list[i - 1];
    }

    list[position] = key;
    (*size)++;
}

void show(int list[], int size) {
    printf("Lista atualizada: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}