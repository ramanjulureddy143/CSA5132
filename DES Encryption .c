#include<stdio.h>

int main(){
 unsigned int L=0x12345678, R=0x9ABCDEF0, K=0x1ABCDE, i;

 for(i=0;i<16;i++){
  unsigned int t = R;
  R = L ^ (R ^ K);   // simplified DES round
  L = t;
 }

 printf("Cipher Text: %X %X", L, R);
}
