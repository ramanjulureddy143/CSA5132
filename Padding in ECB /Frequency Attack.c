#include<stdio.h>

int main(){
 char c[]="WKLVLVDWHVW";
 int f[26]={0}, i;

 for(i=0;c[i];i++) f[c[i]-'A']++;

 for(i=0;i<26;i++)
   if(f[i]) printf("%c : %d\n", i+'A', f[i]);
}
