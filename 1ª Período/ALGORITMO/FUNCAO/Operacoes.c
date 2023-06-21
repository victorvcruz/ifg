#include <stdio.h>


int opcao;
float variavelUm, variavelDois;

void soma(){
    float soma;
    soma = variavelUm + variavelDois;
    printf("A SOMA DOS VALORES E %.2f\n", soma);
};

void sub(float um, float dois){
    float sub;
    sub = um - dois;
    printf("A SUBTRACAO DOS VALORES E %.2f\n", sub);
};

float mul(float um, float dois){
    float mul;
    mul = variavelUm * variavelDois;
    return mul;
};

float div(){
    float div;
    div = variavelUm / variavelDois;
    return div;
};

void menu(){
    printf("DIGITE UM NUMERO:\n");
    scanf("%f", &variavelUm);

    printf("DIGITE OUTRO NUMERO:\n");
    scanf("%f", &variavelDois);

    printf("\nOPCOES DE CALCULO:\n1 - SOMA\n2 - SUB\n3 - MUL\n4 - DIV\n");
    scanf("%d", &opcao);
};


void main() {
    menu();
     float aux;
    switch (opcao)
    {
    case 1:
        soma();
        break;
    case 2:
        sub(variavelUm, variavelDois);
        break;
    case 3:
        aux = mul(variavelUm, variavelDois);
        printf("A MULTIPLICACAO DOS VALORES E %.2f\n", aux);
        break;
    case 4:
        aux = div();
        printf("A DIVISAO DOS VALORES E %.2f\n", aux);
        break;
    }

}