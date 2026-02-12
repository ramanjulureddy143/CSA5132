#include<stdio.h>

int main(){
 int shifts[16]={1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1}, i;

 printf("DES Round Shifts:\n");
 for(i=0;i<16;i++)
  printf("Round %2d : Left shift %d\n", i+1, shifts[i]);
}
