#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
 char p[50]="SENDMOREMONEY";
 int k[]={9,0,1,7,23,15,21,14,11,11,2,8,9}, i;

 for(i=0;p[i];i++)
  p[i]=((p[i]-'A'+k[i])%26)+'A';

 printf("Cipher: %s",p);
}
