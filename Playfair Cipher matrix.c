#include<stdio.h>
#include<ctype.h>

char m[5][5]={
 {'M','F','H','I','K'},
 {'U','N','O','P','Q'},
 {'Z','V','W','X','Y'},
 {'E','L','A','R','G'},
 {'D','S','T','B','C'}
};

void p(char c,int *r,int *c1){
 if(c=='J') c='I';
 for(int i=0;i<5;i++)
  for(int j=0;j<5;j++)
   if(m[i][j]==c){*r=i;*c1=j;}
}

int main(){
 char t[100];
 int r1,c1,r2,c2;

 printf("Text: "); gets(t);

 for(int i=0;t[i];i+=2){
  if(!t[i+1]) t[i+1]='X';
  p(toupper(t[i]),&r1,&c1);
  p(toupper(t[i+1]),&r2,&c2);

  if(r1==r2)
   printf("%c%c",m[r1][(c1+1)%5],m[r2][(c2+1)%5]);
  else if(c1==c2)
   printf("%c%c",m[(r1+1)%5][c1],m[(r2+1)%5][c2]);
  else
   printf("%c%c",m[r1][c2],m[r2][c1]);
 }
}
