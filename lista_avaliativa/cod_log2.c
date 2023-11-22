#include <stdio.h>
#include <math.h>

int main(void) {
  float lado;
  int qnt_lados;
  float area;
  printf("Quantos centimetros tem o lado?: ");
  scanf("%f",&lado);
  printf("Quantos lados tem: ");
  scanf("%i",&qnt_lados);
  if(qnt_lados == 3){
    area = ((lado*lado)*sqrt(3))/4;
    printf("Triangulo area = %.2f",area);
  } else if(qnt_lados == 4){
    area=lado*lado;
    printf("QUADRADO area = %.2f cm^2",area);
  } else {
    printf("É UM PENTAGONO");
  }
  return 0;
}