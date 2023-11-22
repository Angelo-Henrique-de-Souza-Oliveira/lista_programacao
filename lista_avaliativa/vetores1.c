#include <stdio.h>

int main(void) {
  int v[15];
  int i;
  for(i=0;i<15;i++){
    printf("informe um numero: ");
    scanf("%i",&v[i]);
  }
  printf("[");
  for(i=0;i<15;i++){
    printf(" %i ", v[i]);
  }
  printf("]");
  return 0;
}