#include <stdio.h>

void show(int list[], int size);

void bubble_sort(int list[], int size);

void selection_sort(int list[], int size);

void insertion_sort(int list[], int size);

int main() {
    int list[] = {5, 8, 100, 1, 10, 8, 25, 58, 0};
    int size = 9;

    printf("Bubble Sort: ");
    bubble_sort(list, size);

    printf("Selection Sort:");
    selection_sort(list, size);

    printf("Insertion Sort:");
    insertion_sort(list, size);

    return 0;
}

void show(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

void bubble_sort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int aux = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                int aux2 = list[j];
                list[j] = list[j + 1];
                list[j + 1] = aux2;
                aux = 1;
            }
        }
        if (!aux) {
            break;
        }
    }
    show(list, size);
}

void selection_sort(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (list[j] < list[min]) {
                min = j;
            }
        }
        int temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }
    show(list, size);
}

void insertion_sort(int list[], int size) {
    for(int i = 1; i < size; i++) {
        int j = i -1;
        int key = list[i];
        while(j >= 0 && list[j] > key) {
            list[j+1] = list[j];
            j--;
        }
        list[j +1] = key;
    }
    show(list, size);
}