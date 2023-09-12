#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5
#define LEN 50

struct Aluno {
int idade;
char nome[LEN];
int mat;
char curso[LEN];
char campus[LEN];
};

typedef struct sala {
  struct Aluno *sl;
  int pInserir;
  int pRemover;
  int numAlnunos;
  int maxAlunos;
}Sala;

struct Aluno *criaAluno();
void exibeAluno(struct Aluno *aluno);
void menu();
void controleSala();
Sala *criaSala();

int main()
{
    Sala *Ed1;
    Ed1 = criaSala();
    
    /*
    struct Aluno *al;
    al = criaAluno();
    exibeAluno(al);
    */
    controleSala();
    return 0;
}

struct Aluno *criaAluno(){
    struct Aluno *al;
    al = (struct Aluno *) malloc(sizeof(struct Aluno));
    if(al == NULL){
        printf("N�o foi possivel alocar a mem�ria\n");
        exit(1);
    }
    // aqui a mem�ria do aluno j� est� alocada.
    printf("Digite o nome: ");
    scanf("%s",al->nome);

    printf("Digite o idade: ");
    scanf("%d",&al->idade);

    printf("Digite a matricula: ");
    scanf("%d",&al->mat);
    // getchar();
    printf("Digite o curso: ");
    scanf("%s",al->curso);

        printf("Digite o campus: ");
    scanf("%s",al->campus);/**<  */

    return al;
}


void exibeAluno(struct Aluno *aluno){
    printf("Aluno:\n");
    printf("Nome: %s\n",aluno->nome);
    printf("Idade: %d\n",aluno->idade);
    printf("Matr�cula: %d\n",aluno->mat);
    printf("Curso: %s\n",aluno->curso);
    printf("Campus: %s\n",aluno->campus);
}


void controleSala(){
    struct Aluno *al;
    char opcao;
    do{
      menu();
      scanf("%c",&opcao);
    }while(opcao != '0');
    
}


void menu(){
  printf("------------------------\n");
  printf("------------------------\n");
  printf("0 - sair\n");
  printf("1 - criar aluno\n");
  printf("2 - exibir aluno criado\n");
  printf("3 - add aluno na sala\n");
  printf("4 - remover aluno da sala\n");
  printf("5 - exibir sala\n");
  printf("------------------------\n");
  printf("------------------------\n");
}

void insereSala(struct Aluno *al){}
void removeSala(struct Aluno *al){}
void exibeSala(){}

Sala *criaSala(){
   
   Sala *ss = (Sala*) malloc(sizeof(Sala));
   if(ss == NULL)
   {
      printf("N�o foi poss�vel alunos a sala ED1\n");
      exit(1);
   }
   ss->sl = (struct Aluno *) malloc(sizeof(struct Aluno)*MAX);
   if(ss->sl == NULL)
   {
      printf("N�o foi poss�vel criar a sala ED1\n");
      exit(1);
   }
  struct Aluno *p =ss->sl;
  //for(int edx=0; edx<MAX; edx++)
     
  //int pInserir;
  //int pRemover;
  //int numAlnunos;
  //int maxAlunos;
   
}