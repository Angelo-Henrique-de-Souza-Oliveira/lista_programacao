#include <stdio.h>

int main(void) {
  typedef struct {
    int hora,min,seg;
  }horario;
  typedef struct {
  int dia,mes,ano;
  }data;
  typedef struct{
  data d;
  horario h;
  char descricao[500];
  }compromisso;
  compromisso c;
  printf("Qual data?: ");
  scanf("%d/%d/%d",&c.d.dia,&c.d.mes,&c.d.ano);
  printf("\n");
  printf("Qual horario?: ");
  scanf("%02d:%02d:%02d",&c.h.hora,&c.h.min,&c.h.seg);
  printf("\n");
  printf("Qual o compromisso?: ");
  scanf(" %[^\n]",&c.descricao);
  printf("\n");
  printf("Data: %d/%d/%d\n",c.d.dia,c.d.mes,c.d.ano);
  printf("Horario: %d:%d:%d\n",c.h.hora,c.h.min,c.h.seg);
  printf("Compromisso: %s\n",c.descricao);
  
  return 0;
}