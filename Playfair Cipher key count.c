#include<stdio.h>
#include<math.h>

int main(){
 double total = 1;
 for(int i=1;i<=25;i++) total *= i;

 printf("Total Playfair keys = %.2e\n", total);
 printf("Approx power of 2 ≈ 2^%.0f\n", log2(total));
 printf("Effective unique keys ≈ total / 2\n");
}
