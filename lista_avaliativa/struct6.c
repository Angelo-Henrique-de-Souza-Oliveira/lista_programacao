#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
  typedef struct{
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
    float media;
  }aluno;
  aluno alunos[5];
  
  int i;
  for(i=0;i<5;i++){
    printf("Digite o numero da sua matricula do aluno %d: ",i+1);
    scanf("%d",&alunos[i].matricula);
    printf("\n");
    printf("Digite o nome do aluno %d: ",i+1);
    scanf("%s",&alunos[i].nome);
    printf("\n");
    printf("informe as tres notas do aluno %d: ",i+1);
    scanf("%f %f %f",&alunos[i].nota1,&alunos[i].nota2,&alunos[i].nota3);
    printf("\n");
    alunos[i].media=(alunos[i].nota1+alunos[i].nota2+alunos[i].nota3)/3;
    system("clear");
  }
  char maior_nota[50]={};
  char maior_aluno[50]={}; 
  char menor_aluno[50]={};
  float maior=0,maior_med=0,menor_med=9999;
  for(i=0;i<5;i++){
    if(alunos[i].nota1>=maior){
      strcpy(maior_nota, alunos[i].nome);
      maior=alunos[i].nota1;
    }
    if(alunos[i].media>=maior_med){
      strcpy(maior_aluno, alunos[i].nome);
      maior_med=alunos[i].media;
    }
    if(alunos[i].media<=menor_med){
      strcpy(menor_aluno, alunos[i].nome);
      menor_med=alunos[i].media;
    }
  }

  for(i=0;i<5;i++){
    printf("matricula: %d\nnome: %s\nmedia: %.2f\n",alunos[i].matricula,alunos[i].nome,alunos[i].media);
    if(alunos[i].media>=6){
      printf("Status: aprovado");
    }else{
      printf("Status: reprovado");
    }
    printf("\n");
    printf("\n");
  }
  printf("\n");
  printf("aluno com maior nota na primeira prova: %s\nnota da prova 1: %.2f\n",maior_nota,maior);
  printf("Aluno com a maior media: %s\n maior media: %.2f\n",maior_aluno,maior_med);
  printf("Aluno com a menor media: %s\n menor media: %.2f\n",menor_aluno,menor_med);
  return 0;
}