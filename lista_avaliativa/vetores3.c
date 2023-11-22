#include <stdio.h>

int main(void) {
  /*declarando variaveis*/
  int v[12]={2,5,8,10,15,20,25,30,35,40,45,50};
  int r[12];

  int i;
  /*dividindo e multiplicando*/
  for(i=0;i<12;i++){
    if(i%2!=0){
      r[i]=v[i]*3;
    } else{
      r[i]=v[i]/2;
    }
  }
  /*printando vetor original*/
  printf("[");
  for(i=0;i<12;i++){
    printf("%i ",v[i]);
  }
  printf("]\n");
  /*printando vetor resultado*/
  printf("[");
  for(i=0;i<12;i++){
    printf("%i ",r[i]);
  }
  printf("]");
  return 0;
}