#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(void) {
  struct contato {
    char nome[50];
    char endereco[100];
    char telefone[20];
  };
  struct contato agenda[5];

  for(int i=0 ; i<5;i++){
    printf("informacoes do contato nº %i\n",i+1);
    printf("\n");
    printf("Digite o nome: ");
    scanf("%s", agenda[i].nome);
    printf("Digite o endereço: ");
    scanf("%s", agenda[i].endereco);
    printf("Digite o telefone: ");
    scanf("%s", agenda[i].telefone);
    printf("\n");
  }
  system("clear");

  for(int j=0; j<5-1;j++){
    for(int k=j+1;k<5;k++){
      if(strcmp(agenda[j].nome,agenda[k].nome)>0){
        struct contato n =agenda[j];
        agenda[j]=agenda[k];
        agenda[k]=n;
      }
    }
  }

  printf("Lista de contatos ordenados por nome:\n");
  for(int i=0;i<5;i++){
    printf("Nome: %s\nEndereco: %s\nTelefone: %s\n\n", agenda[i].nome, agenda[i].endereco, agenda[i].telefone);
  }
  return 0;
}