#include <stdio.h>

int main(void) {
  printf("No que posso ajudar?: \n");
  printf("\n");
  printf("1 - Fazer Check-in\n2 - Chamar serviço de quarto\n3 - Fazer pedido");
  printf("\n");
  int op;
  printf("Digite o número da opção desejada: ");
  scanf("%i",&op);
  printf("\n");
  char nome[50],city[20],state[20];
  int cpf,tel;
  char constanome[50];
  int numquarto;
  char pedido[100];
  switch(op)
    {
      case 1:
      printf("Informe seus dados abaixo para o check-in !\n");
      printf("\n");
      printf("Informe seu Nome: \n");
      scanf("%s",&nome);
      printf("Informe seu CPF: \n");
      scanf("%i",&cpf);
      printf("Informe seu Telefone: \n");
      scanf("%s",&tel);
      printf("Informe sua Cidade e Estado: \n");
      scanf("%s %s",&city,&state);
      break;
      case 2:
      printf("Informe seus dados abaixo\npara chamar o serviço de quarto!\n");
      printf("\n");
      printf("informe seu nome: \n");
      scanf("%s",&constanome);
      printf("Informe o numero do seu quarto: \n");
      scanf("%i",&numquarto);
      break;
      case 3:
      printf("Escolha o que deseja pedir!\n");
      printf("\n");
      printf("Bebidas: \n1-Suco\n2-Refrigerante\n3-Água\n4-Cafe\n");
      printf("\n");
      printf("Comida: \n1-Pizza\n2-Hamburguer\n3-Pastel\n4-Burrito\n");
      printf("\n");
      printf("Acompanhamento: \n1-Batata Frita\n2-Calabresa\n3-queijo\n4-nada\n");
      printf("Informe o pedidos: ");
      scanf("%s",&pedido);
      printf("Pedido Realizado");
    }
  return 0;
}