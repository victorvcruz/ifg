#include <stdio.h>
int main()
{
    int notaUm, notaDois, notaTres, notaQuatro; 
    float media; 

    scanf("%d%d%d%d", &notaUm, &notaDois, &notaTres, &notaQuatro);

    media = (notaUm * 4 + notaDois * 6 + notaTres * 6 + notaQuatro * 4) / (4 + 6 + 6 + 4);

    if (media >= 7) {
        printf("Aluno Aprovado\n");
    } else {
        printf("Aluno Reprovado\n");
    }
}

