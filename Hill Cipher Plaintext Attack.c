#include<stdio.h>

int inv(int a){
 for(int i=1;i<26;i++) if((a*i)%26==1) return i;
 return -1;
}

int main(){
 int P[2][2]={{7,4},{11,11}};   // plaintext matrix (HE LL)
 int C[2][2]={{19,0},{2,2}};   // ciphertext matrix
 int d,iP,k[2][2];

 d=(P[0][0]*P[1][1]-P[0][1]*P[1][0]+26)%26;
 iP=inv(d);

 int Pinv[2][2]={
  { P[1][1]*iP%26, (26-P[0][1])*iP%26 },
  { (26-P[1][0])*iP%26, P[0][0]*iP%26 }
 };

 for(int i=0;i<2;i++)
  for(int j=0;j<2;j++)
   k[i][j]=(C[i][0]*Pinv[0][j]+C[i][1]*Pinv[1][j])%26;

 printf("Recovered Key:\n%d %d\n%d %d\n",k[0][0],k[0][1],k[1][0],k[1][1]);
}
