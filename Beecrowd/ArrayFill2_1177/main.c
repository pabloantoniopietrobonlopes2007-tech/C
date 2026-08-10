#include <stdio.h>

int main() {
    int N[1000],n,cont=0;

    scanf("%d",&n);

    for(int i=0;i<1000;i++){
        N[i]=cont;
        if(cont==n-1){
            cont=0;
        }
        else{
            cont++;
        }
    }

    for(int i=0;i<1000;i++){
        printf("N[%d] = %d\n", i,N[i]);
    }

    return 0;
}
