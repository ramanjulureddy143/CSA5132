#include<stdio.h>
#include<stdlib.h>

int main(){
 int msg = 100;
 int k1 = rand()%50, k2 = rand()%50;

 printf("DSA Signature 1 = %d\n", msg + k1);
 printf("DSA Signature 2 = %d\n", msg + k2);

 printf("RSA Signature  = %d\n", msg * 3);
 printf("RSA Signature  = %d\n", msg * 3);
}
