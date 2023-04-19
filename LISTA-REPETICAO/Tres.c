#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contains(char lista[], char letra){
    for (int i = 1; i <= strlen(lista); ++i) {
        if (lista[i-1] == letra) {
            return 1;
        }
    }
    return 0;
}

int main(){
    char cadeiaDeCaracteres[1000];
    scanf("%s", cadeiaDeCaracteres); 

    int aux, quantidadeVogais, quatidadeIndividuais; 
    char vogais[] = "aeiou";
    char vogaisEncontrada[10];

    quantidadeVogais = 0;
    for (int i = 1; i <= strlen(cadeiaDeCaracteres); ++i) {
        aux = contains(vogais, tolower(cadeiaDeCaracteres[i-1]));
        if(aux == 1) {
            quantidadeVogais++;
            aux = contains(vogaisEncontrada, tolower(cadeiaDeCaracteres[i-1]));
            if (aux == 0){
                aux = strlen(vogaisEncontrada);
                vogaisEncontrada[aux] = tolower(cadeiaDeCaracteres[i-1]);
                printf("VOGAIS:%s\n", vogaisEncontrada);
                printf("AUX:%d\n", aux);
            }
        }
    }

    printf("A quantidade de caracteres digitados: %d\n", strlen(cadeiaDeCaracteres));
    printf("A quantidade de vogais digitados: %d\n", quantidadeVogais);
    printf("A quantidade de vogais, individualmente: %d\n", strlen(vogaisEncontrada));
}

