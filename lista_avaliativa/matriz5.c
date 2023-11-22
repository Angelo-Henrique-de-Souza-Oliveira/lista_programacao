#include <stdio.h>

int main(void) {
  int ls=2,cs=2;
  int m1[ls][cs];
  int m2[ls][cs];
  int mr[ls][cs];
  //obtendo os numeros das matrizes
  for(int i=0;i<ls;i++){
    for(int j=0;j<cs;j++){
      printf("informe m1[%d][%d]: ",i+1,j+1);
      scanf("%d", &m1[i][j]);
    }
  }
  printf("\n");
  for(int i=0;i<ls;i++){
    for(int j=0;j<cs;j++){
      printf("informe m2[%d][%d]: ",i+1,j+1);
      scanf("%d", &m2[i][j]);
    }
  }
  printf("\n");
  for(int i=0;i<ls;i++){
    printf("[ ");
    for(int j=0;j<cs;j++){
      printf("%d ",m1[i][j]);
    }
    printf("]\n");
  }
  printf("\n");
  for(int i=0;i<ls;i++){
    printf("[ ");
    for(int j=0;j<cs;j++){
      printf("%d ",m2[i][j]);
    }
    printf("]\n");
  }
  printf("\n");
  //somando as matrizes
  printf("SOMA DAS MATRIZES:\n");
  for(int i=0;i<ls;i++){
    printf("[ ");
    for(int j=0;j<cs;j++){
      mr[i][j]=m1[i][j]+m2[i][j];
      printf("%d ",mr[i][j]);
    }
    printf("]\n");
  }
  return 0;
}