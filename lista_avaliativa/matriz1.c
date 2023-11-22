#include <stdio.h>

int main(void) {
  int a=10,b=15;
  int MAT[a][b];
  int somal=0,somac=0;
  int vlinhas[a],vcoluna[b];
  for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
      printf("informe um valor para MAT[%i][%i]: ", i+1,j+1);
      scanf("%i",&MAT[i][j]);
    }
  }

  //soma das linhas
  int i,j;
  int contl=0,contc=0;
  for(i=0;i<a;i++){
    printf("[ ");
    for(j=0;j<b;j++){
      printf("%i ",MAT[i][j]);
      if(i==contl){
        somal=somal+MAT[i][j];
      }
    }
    vlinhas[i]=somal;
    somal=0;
    contl=contl+1;
    printf("]\n");
  }
  printf("\n");
  //soma das colunas
    for(j=0;j<b;j++){
      printf("[");
      for(i=0;i<a;i++){
        printf("%i",MAT[i][j]);
        if(j==contc){
          somac=somac+MAT[i][j];
        }
      }
      vcoluna[j]=somac;
      somac=0;
      contc=contc+1;
    }
  printf("\n");
  //printando a soma das linhas
  for(i=0;i<a;i++){
    if(vlinhas[i]%2==0){
      printf(" a soma da linha %i : %i par\n",i+1,vlinhas[i]);
    } else {
      printf(" a soma da linha %i : %i impar\n",i+1,vlinhas[i]);
    }
  }
  printf("\n");
  //printando a soma das colunas
  for(j=0;j<b;j++){
    if(vcoluna[j]%2==0){
      printf("a soma da coluna %i : %i par\n",j+1, vcoluna[j]);
    } else {
      printf("a soma da coluna %i : %i impar\n",j+1, vcoluna[j]);
    }
  }
  return 0;
}