#include<stdio.h>
#include<math.h>

int main(){
 int p=23,g=5,a=6,b=15;

 int A = (int)pow(g,a) % p;
 int B = (int)pow(g,b) % p;

 printf("Shared Key A = %d\n",(int)pow(B,a)%p);
 printf("Shared Key B = %d\n",(int)pow(A,b)%p);
}
