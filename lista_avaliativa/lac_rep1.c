#include <stdio.h>
#include <math.h>

int main(void) {
  float i;
  float soma=0.0;
  float n=0;
  do{
    printf("Digite um número: ");
    scanf("%f",&i);
    if(i!=0 && fmod(i,2)==0){
      soma=soma+i;
      n=n+1.0;
    }
  } while(i!=0);
  float media=soma/n;
  printf("MEDIA DOS VALORES: %.1f",media);
  return 0;
}