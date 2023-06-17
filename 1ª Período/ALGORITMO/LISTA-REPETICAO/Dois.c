#include <stdio.h>
int main()
{

    printf("\n\nPARES: \n");
    for (int i = 1; i <= 100; ++i) {
        if(i%2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nIMPARES: \n");
    for (int j = 1; j <= 100; ++j) {
        if(j%2 != 0) {
            printf("%d ", j);
        }
    }

    printf("\n\nDIVISEIS POR CINCO:\n");
    for (int n = 1; n <= 100; ++n) {
        if(n%5 == 0) {
            printf("%d ", n);
        }
    }
}
