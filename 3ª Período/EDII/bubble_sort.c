#include <stdio.h>

int main() {
    int list[6] = {1, 6, 3, 10, 5, 2};
    int listLength = 6;

    for (int i = 0; i < listLength - 1; i++) {
        int aux = 0;
        for (int j = 0; j < listLength - i - 1; j++) {
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

    for(int i = 0; i < listLength; i++) {
        printf("%d\n", list[i]);
    }
}
