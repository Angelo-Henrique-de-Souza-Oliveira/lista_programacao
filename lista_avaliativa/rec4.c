#include <stdio.h>
#include <string.h>
void inverter(char stri[],int ini,int fim);
int main(void) {
  char str[100];

  printf("Digite uma string: ");
  scanf("%s",&str);
  printf("\n");
  int comprimento =strlen(str);
  inverter(str , 0 ,comprimento-1);
  printf("A string invertida é: %s\n",str);
  return 0;
}
void inverter(char stri[],int ini,int fim){
  if(ini>=fim){
    return;
  }
  char n=stri[ini];
  stri[ini]=stri[fim];
  stri[fim]=n;
  inverter(stri,ini+1,fim-1);
}