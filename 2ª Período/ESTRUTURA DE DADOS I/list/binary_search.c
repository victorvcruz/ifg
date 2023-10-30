#include <stdio.h>

int binarySearch(int arr[], int size, int target);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 7;
    int index = binarySearch(arr, size, target);

    if (index != -1) {
        printf("O elemento %d foi encontrado no índice %d\n", target, index);
    } else {
        printf("O elemento %d não foi encontrado no array\n", target);
    }

    return 0;
}

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}