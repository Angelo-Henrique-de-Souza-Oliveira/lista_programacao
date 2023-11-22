#include <stdio.h>

int main(void) {
  int a;
  int neg=0;
  for(int n=0;n<5;n++){
    printf("Informe um numero qualquer: ");
    scanf("%d",&a);
    if(a<0){
      neg++;
    }
  }
  printf("\n");
  printf("Existe %d numeros negativos",neg);
  return 0;
}