#include <stdio.h>

int main(void) {
  typedef struct{
    char nome[100];
    int matricula;
    char curso[50];
  }info;
  info alunos[5];
  int i;
  for(i=0;i<5;i++){
    printf("Digite o nome do aluno: ");
    scanf("%s",&alunos[i].nome);
    printf("\n");
    printf("Digite a matricula do aluno: ");
    scanf("%d",&alunos[i].matricula);
    printf("\n");
    printf("Digite o curso do aluno: ");
    scanf("%s",&alunos[i].curso);//colocar tudo junto ou com traços no lugar dos espaços ex:eng-de-software
    printf("\n");
  }
  for(i=0;i<5;i++){
    printf("Aluno: %s\nMatricula: %d\nCurso: %s\n",alunos[i].nome,alunos[i].matricula,alunos[i].curso);
    printf("\n");
  }
  return 0;
}