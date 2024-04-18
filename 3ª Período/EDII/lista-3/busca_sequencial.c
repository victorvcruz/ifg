#include <stdio.h>
#include <stdbool.h>

int sequential_search(int list[], int size, int key, int *repetitions);

void remove_duplicates(int list[], int *size, int key, int first_index);

void show(int list[], int size);

int main() {
    int list[10] = {5, 8, 100, 1, 100, 8, 25, 58, 0, 25};
    int size = 10;
    int key = 0;
    int aux = 1;

    while(aux = 1) {
        printf("Insira registro:");
        scanf("%d", &key);

        if (key == -1) {
            aux = -1;
            printf("Execução finalizada");
            break;
        }

        int repetitions;
        int index = sequential_search(list, size, key, &repetitions);

        if (index != -1) {
            remove_duplicates(list, &size, key, index);
            show(list, size);
        } else {
            printf("Registro não existe\n");
            list[size] = key;
            size++;
            show(list, size);
        }
    }

    return 0;
}

int sequential_search(int list[], int size, int key, int *repetitions) {
    int index = -1;
    *repetitions = 0;

    for (int i = 0; i < size; i++) {
        if (list[i] == key) {
            (*repetitions)++;
            if (index == -1) {
                index = i;
            }
        }
    }

    return index;
}

void remove_duplicates(int list[], int *size, int key, int first_index) {
    int new_list[10];
    int new_size = 0;
    bool first_occurrence = false;

    for (int i = 0; i < *size; i++) {
        if (list[i] == key) {
            if (!first_occurrence && i == first_index) {
                first_occurrence = true;
                new_list[new_size] = list[i];
                new_size++;
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

void show(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}
