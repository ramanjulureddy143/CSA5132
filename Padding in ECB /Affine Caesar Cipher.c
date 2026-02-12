#include<stdio.h>

int main(){
 char p[]="ACT";
 int a=5,b=8,i;

 for(i=0;p[i];i++)
   printf("%c", (a*(p[i]-'A')+b)%26+'A');
}
