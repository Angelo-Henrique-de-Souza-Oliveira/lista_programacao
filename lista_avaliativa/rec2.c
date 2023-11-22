#include <stdio.h>

float soma(float x, float y);
float multiplicacao(float x, float y);
float divide(float x, float y);
float subtrai(float x, float y);
int main(void) {
  float num1,num2;
  printf("Digite dois numero que deseja realizar as operaçoes: ");
  scanf("%f %f",&num1,&num2);
  printf("\n");
  printf(">>Soma: %.2f\n",soma(num1,num2));
  printf(">>multiplicacao: %.2f\n",multiplicacao(num1,num2));
  printf(">>divisao: %.2f\n",divide(num1,num2));
  printf(">>subtracao: %.2f\n",subtrai(num1,num2));
  return 0;
}
float soma(float x, float y){
  if(y==0){
    return x;
  }else{
    return soma(x+1,y-1);
  }
}
float multiplicacao(float x, float y){
  if(y==0){
    return 0;
  }else{
    return(x+multiplicacao(x,y-1));
  }
}
float divide(float x, float y){
  if(y==0){
    printf("Erro divisão por zero");
    return 0;
  }else{
    return x/y;
  }
}
float subtrai(float x, float y){
  if(y==0){
    return x;
  }else{
    return subtrai(x-1,y-1);
  }
}