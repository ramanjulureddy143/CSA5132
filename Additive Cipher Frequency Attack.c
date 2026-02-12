#include<stdio.h>
#include<ctype.h>

int main(){
 char c[100];
 int k,i;

 printf("Cipher: "); gets(c);

 for(k=0;k<26;k++){
  printf("\nKey %d: ",k);
  for(i=0;c[i];i++)
   if(isalpha(c[i]))
    printf("%c",((toupper(c[i])-'A'-k+26)%26)+'A');
 }
}
