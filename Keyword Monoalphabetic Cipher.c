#include<stdio.h>
#include<ctype.h>

int main(){
 char key[26], p[50], c[26]={0};
 int i,j=0, f[26]={0};

 printf("Key: "); gets(key);
 printf("Text: "); gets(p);

 for(i=0;key[i];i++){
  char ch=toupper(key[i]);
  if(!f[ch-'A']) c[j++]=ch, f[ch-'A']=1;
 }
 for(i=0;i<26;i++)
  if(!f[i]) c[j++]=i+'A';

 for(i=0;p[i];i++)
  if(isalpha(p[i]))
   p[i]=c[toupper(p[i])-'A'];

 printf("Cipher: %s",p);
}
