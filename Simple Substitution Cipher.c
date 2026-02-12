#include<stdio.h>

int main(){
 char c[500];
 int f[256]={0},i;

 printf("Cipher text:\n");
 gets(c);

 for(i=0;c[i];i++)
  f[(unsigned char)c[i]]++;

 printf("\nFrequency:\n");
 for(i=0;i<256;i++)
  if(f[i]>0)
   printf("%c : %d\n",i,f[i]);
}
