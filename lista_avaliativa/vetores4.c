#include <stdio.h>
#include <string.h>

int main(void) {
  char strings [10][100] ={"Lidia","Alice","Vitor","Lia","George","Sabrina","Talitha","Emilly","Lucas","Wildes"};
  char nome[100];
  printf("Qual nome deseja encontrar? \n");
  scanf("%s", &nome);

  int found=0;
  for(int i=0;i<10;i++){
    if(strcmp(nome, strings[i]) == 0){
      printf("ACHEI: %s\n", strings[i]);
      found = 1;
      break;
    }
  }
  if(!found){
    printf("NÃO ACHEI\n");
  }
  return 0;
}