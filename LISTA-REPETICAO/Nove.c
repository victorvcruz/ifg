#include <stdio.h>
int main()
{
    int number, total;

    scanf("%d", &number);
    total = 0;
    printf("NUMEROS PRIMOS: \n");
    for (int i = 1; i <= number; ++i) {
        if(i%2 == 0 && i != 2) {
            continue;
        }

        if(i%3 == 0 && i != 3) {
            continue;
        }

        if(i%5 == 0 && i != 5) {
            continue;
        }

        if(i%11 == 0 && i != 11) {
            continue;
        }

        printf("%d ", i);
        total++;
    }
    printf("\nTOTAL: %d", total);
}

