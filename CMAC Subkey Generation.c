#include<stdio.h>

int main(){
 unsigned long K1=0x87, K2;

 K2 = (K1<<1) ^ 0x1B;   

 printf("Subkey K1 = %lx\n", K1);
 printf("Subkey K2 = %lx\n", K2);
}
