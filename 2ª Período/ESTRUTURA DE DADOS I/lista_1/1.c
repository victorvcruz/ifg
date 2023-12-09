#include <stdio.h>

void feliz_aniversario();

float area_retangulo(float base, float altura);

float fahrenheit_celsius(float temperatura);

int fatorial(int numero);

void main() {
    feliz_aniversario();

    float area = area_retangulo(2, 4);
    printf("area: %.2f\n", area);

    float temperaturaC = fahrenheit_celsius(451);
    printf("celsius: %.2f\n", temperaturaC);

    int resultado = fatorial(2);
    printf("fatorial: %d\n", resultado);
}

void feliz_aniversario() {
    printf("****************\n* Feliz Aniversário *\n****************\n");
}

float area_retangulo(float base, float altura) {
    return base * altura;
}

float fahrenheit_celsius(float temperatura) {
    return (temperatura - 32) * 5 / 9;;
}

int fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    }
    int fatorial = 1;

    for (int i = 2; i <= numero; i++) {
        fatorial *= i;
    }

    return fatorial;
}
