#include <stdio.h>
#include <stdbool.h>
int main(void) {
  struct dados{
  int matricula;
  char nome[50];
  char code_discp[10];
  float nota1;
  float nota2;
  float media;
  };
  struct dados lista[3];
  int i;
  for(i=0;i<3;i++){
    printf("Digite a matricula do aluno %d: ",i+1);
    scanf("%d",&lista[i].matricula);
    printf("\n");
    printf("Digite o nome do aluno: ");
    scanf("%s",&lista[i].nome);
    printf("\n");
    printf("Digite o codigo da disciplina: ");
    scanf("%s",&lista[i].code_discp);
    printf("\n");
    printf("Digite a nota 1: ");
    scanf("%f",&lista[i].nota1);
    printf("\n");
    printf("Digite a nota 2: ");
    scanf("%f",&lista[i].nota2);
    printf("\n");
    lista[i].media=((lista[i].nota1*1.0)+(lista[i].nota2*2.0))/3.0;
  }
  system("clear");
  
  for(i=0;i<3;i++){
    printf("Matricula: %d\n",lista[i].matricula);
    printf("Nome: %s\n",lista[i].nome);
    printf("Codigo da Disciplina: %s",lista[i].code_discp);
    printf("Nota 1: %.2f\n",lista[i].nota1);
    printf("Nota 2: %.2f\n",lista[i].nota2);
    printf("Media ponderada: %.2f\n",lista[i].media);
    printf("\n");
  }
  return 0;
}