#include<stdio.h>

int main(){
 unsigned int R=0x12345678, K=0x1ABCDE;
 unsigned int f;

 f = (R ^ K);   // simplified f-function
 printf("f(R,K) = %X", f);
}
