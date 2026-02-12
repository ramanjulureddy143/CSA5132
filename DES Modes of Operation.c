#include<stdio.h>

int des(int d,int k){ return d^k; }

int main(){
 int P=10, K=5, IV=7;

 printf("ECB: %d\n", des(P,K));
 printf("CBC: %d\n", des(P^IV,K));
 printf("CFB: %d\n", des(IV,K)^P);
 printf("OFB: %d\n", des(des(IV,K),P));
}
