#include <stdio.h>

int main(void) {
  int ls=50;
  int cs=50;
  int mat[ls][cs];
  int vet[ls];

  for(int i=0;i<ls;i++){
    for(int j=0; j < cs;j++){
      printf("Informe um valor para mat[%i][%i]",i+1,j+1);
      scanf("%i",&mat[i][j]);
      if(i==j){
        vet[i]=mat[i][j];
      }
    }
  }
  printf("\n");
  printf("[");
  for(int i=0;i<ls;i++){
    printf(" %i ",vet[i]);
  }
  printf("]\n");
  return 0;
}