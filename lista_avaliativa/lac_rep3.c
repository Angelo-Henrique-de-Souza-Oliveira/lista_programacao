#include <stdio.h>

int main(void) {
  int i=-1;
  int um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0;
  printf("Escolha o número do seu candidato: \n");
  printf("\n");
  printf("1 - Para o primeiro candidato\n2 - Para o segundo candidato\n3 - Para o terceiro candidato\n4 - Para o quarto candidato\n5 - Para votar nulo\n6 - Para votar em Branco\n");
  printf("\n");
  while(i!=0){
    printf("Digitalize sua escolha: ");
    scanf("%i",&i);
    printf("\n");
    if(i==1){
      um++;
    } else if(i==2){
      dois++;
    } else if(i==3){
      tres++;
    } else if(i==4){
      quatro++;
    } else if(i==5){
      cinco++;
    }else if(i==6){
      seis++;
    }else{
      if(i!=0){
        printf("valor inválido\n");
      }
    }
  }
  printf("Quantidade de votos: \n");
  printf("Primeiro Candidato: %i\nSegundo Candidato: %i\nTerceiro Candidato: %i\nQuarto Candidato: %i\nVotos Nulos: %i\nVotos Brancos: %i",um,dois,tres,quatro,cinco,seis);
  return 0;
}