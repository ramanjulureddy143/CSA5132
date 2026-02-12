#include<stdio.h>
#include<string.h>
#include<ctype.h>

char m[5][5];

void g(char *k){
 int f[26]={0},i,x=0;
 for(i=0;k[i];i++){
  char c=toupper(k[i]=='J'?'I':k[i]);
  if(!f[c-'A']) m[x/5][x%5]=c,f[c-'A']=1,x++;
 }
 for(i=0;i<26;i++)
  if(i+'A'!='J'&&!f[i]) m[x/5][x%5]=i+'A',x++;
}

void p(char c,int *r,int *c1){
 if(c=='J') c='I';
 for(int i=0;i<5;i++)
  for(int j=0;j<5;j++)
   if(m[i][j]==c){*r=i;*c1=j;}
}

int main(){
 char k[20],t[20]; int r1,c1,r2,c2;
 printf("Key: ");gets(k);
 printf("Text: ");gets(t);
 g(k);
 for(int i=0;t[i];i+=2){
  if(!t[i+1]) t[i+1]='X';
  p(toupper(t[i]),&r1,&c1); p(toupper(t[i+1]),&r2,&c2);
  if(r1==r2) printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
  else if(c1==c2) printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
  else printf("%c%c",m[r1][c2],m[r2][c1]);
 }
}
