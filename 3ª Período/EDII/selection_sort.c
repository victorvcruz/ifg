#include <stdio.h>

int main() {
    int list[6] = {1, 6, 3, 10, 5, 2};
    int listLength = 6;

    for (int i = 0; i < listLength - 1; i++) {
        int min = i;
        for (int j = i + 1; j < listLength; j++) {
            if (list[j] < list[min]) {
                min = j;
            }
        }
        int temp = list[i];
        list[i] = list[min];
        list[min] = temp;
    }

    for(int i = 0; i < listLength; i++) {
        printf("%d\n", list[i]);
    }
}