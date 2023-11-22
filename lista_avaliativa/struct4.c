#include <stdio.h>

int main(void) {
  typedef struct{
    char nome[100];
    int idade;
    int cep;
  }info;
  info pessoa;
  printf("Digite seu nome: ");
  scanf("%s",&pessoa.nome);
  printf("\n");
  printf("Digite sua idade: ");
  scanf("%d",&pessoa.idade);
  printf("\n");
  printf("Digite seu cep: ");
  scanf("%d",&pessoa.cep);
  printf("\n");
  printf("Nome: %s\nIdade: %d\nCep: %d",pessoa.nome,pessoa.idade,pessoa.cep);
  return 0;
}