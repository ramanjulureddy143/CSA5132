#include <stdio.h>

int main() {
    int lanes[25]={0}, i, rounds=0;

    lanes[0]=1;   // first message block has non-zero bits

    while(1){
        int c=0;
        for(i=0;i<25;i++) if(lanes[i]) c++;

        if(c==25) break;

        lanes[rounds%25]=1;  // diffusion
        rounds++;
    }
    printf("Rounds needed = %d\n", rounds);
}
