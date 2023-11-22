#include <stdio.h>

int main(void) {
  int ls=2;
  int cs=3;
  int mt[ls][cs];
  int tmt[cs][ls];
  //lendo os valores da matriz :)
  for(int i=0;i<ls;i++){
    for(int j=0;j<cs;j++){
      printf("valor de mt[%i][%i]: ",i+1,j+1);
      scanf("%i",&mt[i][j]);
    }
  }
  printf("\n");
  //matriz normal
  printf("MATRIZ INFORMADA\n");
  for(int i=0;i<ls;i++){
    printf("[");
    for(int j=0;j<cs;j++){
      printf(" %i ",mt[i][j]);
    }
    printf("]\n");
  }
  printf("\n");
  //transpondo a matriz
  printf("A TRANSPOSTA DA MATRIZ:\n");
  for(int j=0;j<cs;j++){
    printf("[");
    for(int i=0;i<ls;i++){
      tmt[j][i]=mt[i][j];
      printf(" %i ",tmt[j][i]);
    }
    printf("]\n");
  }
  return 0;
}