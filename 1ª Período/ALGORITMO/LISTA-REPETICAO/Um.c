#include <stdio.h>
int main()
{

//A)
    for (int i = 0; i <= 9; ++i) {
        if (i != 9) {
            printf("%d - ", i);
            continue;
        } 
        printf("%d", i);
    }

//B)
    printf("\n\n\n");
    for (int j = 0; j <= 9; ++j) {
        if (j == 5) {
            printf("\n");
        }
        printf("%d ", j);
    }
}

