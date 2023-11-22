#include <stdio.h>
int contadigito(int num);
int main(void) {
  int n;
  printf("Digite qualquer numero: ");
  scanf("%d",&n);
  printf("\n");
  printf("O numero %d possui %d digitos",n,contadigito(n));
  return 0;
}
int contadigito(int num){
  int conta=0;
  while(num!=0){
    conta++;
    num/=10;
  }
  return conta;
}