#include<stdio.h>
#include<ctype.h>

int modInv(int a){
 for(int i=1;i<26;i++) if((a*i)%26==1) return i;
 return -1;
}

int main(){
 char p[20]; 
 int k[2][2]={{9,4},{5,7}}, i;
 int a,b,c,d,det,inv;

 printf("Text: "); gets(p);

 for(i=0;p[i];i+=2){
  a=toupper(p[i])-'A';
  b=toupper(p[i+1])-'A';

  printf("%c%c",
   ((k[0][0]*a+k[0][1]*b)%26)+'A',
   ((k[1][0]*a+k[1][1]*b)%26)+'A');
 }

 det=(k[0][0]*k[1][1]-k[0][1]*k[1][0]+26)%26;
 inv=modInv(det);

 c=( k[1][1]*inv)%26; d=(26-k[0][1])*inv%26;
 a=(26-k[1][0])*inv%26; b=(k[0][0]*inv)%26;

 printf("\nInverse Key:\n%d %d\n%d %d\n",c,d,a,b);
}
