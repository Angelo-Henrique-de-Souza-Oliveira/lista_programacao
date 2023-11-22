#include <stdio.h>
int main(void){
  //declarando variáveis
  int ls1=2,cs1=2;
  int ls2=2,cs2=2;
  int mt1[ls1][cs1];
  int mt2[ls2][cs2];
  int mt3[ls1][cs2];
  //informando valores da primeira matriz
  for(int i=0;i<ls1;i++){
    for(int j=0;j<cs1;j++){
      printf("informe mt1[%i][%i]: ",i+1,j+1);
      scanf("%i",&mt1[i][j]);
    }
  }
  //informando valores da segunda matriz
  printf("\n");
  for(int i=0;i<ls2;i++){
    for(int j=0;j<cs2;j++){
      printf("informe mt2[%i][%i]: ",i+1,j+1);
      scanf("%i",&mt2[i][j]);
    }
  }
  //multiplicando a matriz
  int aux,x;
  for(int i=0;i<ls1;i++){
    for(int j=0;j<cs2;j++){
      mt3[i][j]=0;
      for(x=0;x<ls2;x++){
        aux+= mt1[i][x]*mt2[x][j];
      }
      mt3[i][j]=aux;
      aux=0;
    }
  }
  //imprimindo a matriz
  printf("\n");
  printf("-----------Produto----------");
  printf("\n");
  for(int i=0;i<ls1;i++){
    printf("[ ");
    for(int j=0;j<cs2;j++){
      printf("%i ",mt3[i][j]);
    }
    printf("]\n");
  }
  return 0;
}