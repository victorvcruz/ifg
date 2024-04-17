# include <stdio.h>

int main() {
    int listLength = 6;

    int list[6] = {1, 6, 3, 10, 5, 2};

    for(int i = 1; i < listLength; i++) {
        int j = i -1;
        int key = list[i];
        while(j >= 0 && list[j] > key) {
            list[j+1] = list[j];
            j--;
        }
        list[j +1] = key;
    }

    
    for(int i = 0; i < listLength; i++) {
        printf("%d\n", list[i]);
    }
}
