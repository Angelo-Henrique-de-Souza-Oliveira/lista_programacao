#include <stdio.h>
int potencia(int a,int b);
int main(void) {
  int x,y;
  printf("Digite os numero da base e da potencia respectivamente: ");
  scanf("%d %d",&x,&y);
  printf("\n");
  printf("O resultado de %d elevado a %d é: %d",x,y,potencia(x,y));
  return 0;
}
int potencia(x,y){
  int resultado;
  if(y==0){
    resultado=1;
  }else{
    resultado=x*potencia(x,y-1);
  }
  return resultado;
}