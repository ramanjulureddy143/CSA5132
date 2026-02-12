#include<stdio.h>

int main(){
 char m[50];
 int h=0,i;

 printf("Message: ");
 gets(m);

 for(i=0;m[i];i++)
  h = h + m[i];

 printf("Hash value = %d", h);
}
