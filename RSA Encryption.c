#include<stdio.h>
#include<math.h>

int main(){
 int m=5,e=3,n=33;
 int c = pow(m,e);

 printf("Cipher Text = %d", c % n);
}
