#include<stdio.h>

int main(){
 char c[500];
 int f[26]={0},i;

 printf("Cipher: ");
 gets(c);

 for(i=0;c[i];i++)
  if(c[i]>='A'&&c[i]<='Z')
   f[c[i]-'A']++;

 printf("\nLetter Frequency:\n");
 for(i=0;i<26;i++)
  printf("%c : %d\n",'A'+i,f[i]);
}
