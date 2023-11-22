#include <stdio.h>
#include <math.h>

int main(void) {
  int i, media;
  int n=0,soma=0;
  do{
    printf("Digite um numero: ");
    scanf("%i",&i);
    if(i>=0){
      soma=soma+i;
      n++;
    }
  }while(i>=0);
  media=soma/n;
  printf("MEDIA ARITMETICA: %i",media);
  return 0;
}