#include<stdio.h>
#include<ctype.h>

int gcd(int a,int b){ return b?gcd(b,a%b):a; }

int inv(int a){
 for(int i=1;i<26;i++) if((a*i)%26==1) return i;
 return -1;
}

int main(){
 char c[50];
 int a,b,i,j;

 printf("Cipher: "); gets(c);

 for(a=1;a<26;a++) if(gcd(a,26)==1)
  for(b=0;b<26;b++){
   printf("\na=%d b=%d : ",a,b);
   for(i=0;c[i];i++)
    if(isalpha(c[i])){
     j=inv(a)*((toupper(c[i])-'A'-b+26)%26)%26;
     printf("%c",j+'A');
    }
  }
}
