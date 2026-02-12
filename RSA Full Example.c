#include<stdio.h>
#include<math.h>

int main(){
 int p=3,q=11,n=p*q,e=3,d=7;
 int m=5,c;

 c = (int)pow(m,e) % n;
 printf("Cipher = %d\n",c);

 printf("Plain  = %d",(int)pow(c,d) % n);
}
