#include<stdio.h>

int main(){
 char c[]="KHOOR";
 int k,i,j;

 for(k=0;k<26;k++){
   printf("Key %d: ",k);
   for(i=0;c[i];i++)
     printf("%c",(c[i]-'A'-k+26)%26+'A');
   printf("\n");
 }
}
