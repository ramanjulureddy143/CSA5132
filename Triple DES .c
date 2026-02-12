#include<stdio.h>

unsigned int des(unsigned int d,unsigned int k){
 return d ^ k;   
}

int main(){
 unsigned int P=0x12345678, K1=0x1111, K2=0x2222, K3=0x3333;

 unsigned int C = des(des(des(P,K1),K2),K3);

 printf("Cipher Text: %X", C);
}
