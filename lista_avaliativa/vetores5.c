#include <stdio.h>
#include <math.h>


int main(void) {
  int v1[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int v2[20]={5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
  int dif[20],som[20],mult[20];

  for(int i=0;i<20;i++){
    dif[i]=v1[i]-v2[i];
    som[i]=v1[i]+v2[i];
    mult[i]=v1[i]*v2[i];
  }
  printf("[");
  for(int i=0;i<20;i++){
    printf(" %d ",dif[i]);
  }
  printf("]\n");

  printf("[");
  for(int i=0;i<20;i++){
    printf(" %d ",som[i]);
  }
  printf("]\n");

  printf("[");
  for(int i=0;i<20;i++){
    printf(" %d ",mult[i]);
  }
  printf("]\n");
  return 0;
}