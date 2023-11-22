#include <stdio.h>

int main(void) {
  int n;
  printf("informa o tamanho dos vetores: ");
  scanf("%i",&n);
  printf("\n");
  int vetor1[n],vetor2[n];
  for(int i=0;i<n;i++){
    printf("informe o valor %i do vetor 1: ", i+1);
    scanf("%i",&vetor1[i]);
  }
printf("\n");
  for(int i=0;i<n;i++){
    printf("informe o valor %i do vetor 2: ", i+1);
    scanf("%i",&vetor2[i]);
  }
  
printf("\n");
  for(int i=0;i<n;i++){
    if(vetor1[i]==vetor2[i]){
      printf("o conteudo da posicao %i de ambos vetores são iguais\n", i+1);
    } else{
      printf("Opa! os valores %i e %i são diferentes\n",vetor1[i],vetor2[i]);
      printf("logo os vetores tem conteudo diferentes\n");
    }
  }
  return 0;
}