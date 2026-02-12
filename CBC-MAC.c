#include<stdio.h>

int main(){
 int X=25, K=7;
 int T = X ^ K;          
 int forged = X ^ T;    

 printf("MAC of X = %d\n", T);
 printf("MAC of X||(X⊕T) = %d\n", forged ^ K);
}
