#include <stdio.h>
#include <pthread.h>

void* printTeste(void* arg) {
    int i = *((int*)arg);
    printf("%d\n", i);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[10];

    for (int i = 0; i < 10; i++) {
        int* arg = malloc(sizeof(*arg));
        *arg = i;
        pthread_create(&threads[i], NULL, printTeste, (void*)arg);
    }

    for (int i = 0; i < 10; i++) {
        pthread_join(threads[i], NULL);
    }

    return 0;
}
