#include<stdio.h>

int main(){
 int p=3,q=11,e=3,d=7,n,phi;

 n=p*q;
 phi=(p-1)*(q-1);

 printf("Public Key (e,n) = (%d,%d)\n",e,n);
 printf("Private Key (d,n) = (%d,%d)",d,n);
}
