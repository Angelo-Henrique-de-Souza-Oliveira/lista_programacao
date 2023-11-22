#include <stdio.h>

int main(void) {
  /*declarando variaveis*/
  float v[10];
  float r[10];
  int i;
  /*Lendo valores do vetor*/
  for(i=0;i<10;i++){
    printf("informe um numero real: ");
    scanf("%f", &v[i]);
  }
  /*atribuindo valores*/
  int j;
  for(j=0;j<10;j++){
    i--;
    r[j]=v[i];
  }
  /*imprimindo resultado*/
  printf("[");
  for(j=0;j<10;j++){
    printf(" %.1f ", v[j]);
  }
  printf("]\n");
  /*vetor invertido*/
  printf("[");
  for(j=0;j<10;j++){
    printf(" %.1f ", r[j]);
  }
  printf("]");
  return 0;
}