#include<stdio.h>
#include<ctype.h>

int main(){
 char p[50],k[50];
 int i,j=0;

 printf("Text: "); gets(p);
 printf("Key: ");  gets(k);

 for(i=0;p[i];i++)
  if(isalpha(p[i])){
   p[i]=((toupper(p[i])-'A'+toupper(k[j++%strlen(k)])-'A')%26)+'A';
  }

 printf("Cipher: %s",p);
}
