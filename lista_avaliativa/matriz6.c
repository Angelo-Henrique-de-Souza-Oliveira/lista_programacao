#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int matrix[4][4];
  int somaquad=0;
  int somalinha=0;
  int somadiago=0;
  int somaparlin=0;
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      printf("informe os valores de matrix[%d][%d]: ",i+1,j+1);
      scanf("%d",&matrix[i][j]);
    }
  }
  system("clear");
  printf("\n");
  for(int i=0;i<4;i++){
    printf("| ");
    for(int j=0;j<4;j++){
      printf("%d ",matrix[i][j]);
      if(j==0){
        somaquad=somaquad+(matrix[i][j]*matrix[i][j]);
      }
      if(i==2){
        somalinha=somalinha+matrix[i][j];
      }
      if(i==j){
        somadiago=somadiago+matrix[i][j];
      }
      if(i==1 && j%2!=0){
        somaparlin=somaparlin+matrix[i][j];
      }
    }
    printf("|\n");
  }
  printf("\n");
  printf("Soma dos quadrados\ndos elemetos da primeira coluna: %d\n",somaquad);
  printf("\n");
  printf("Soma dos elementos\nda terceira coluna: %d\n",somalinha);
  printf("\n");
  printf("Soma dos elementos\nda diagonal principal:  %d\n",somadiago);
  printf("\n");
  printf("Soma dos indices pares\n da segunda linha: %d\n",somaparlin);
  return 0;
}