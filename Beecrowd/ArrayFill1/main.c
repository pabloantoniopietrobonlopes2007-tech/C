#include <stdio.h>
#include <math.h>

int main() {
    int N[10]={0};

    scanf("%d",&N[0]);

    for(int i=1;i<10;i++){
        N[i]=N[0]*pow(2,i);
    }

    for(int i=0;i<10;i++){
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;
}
