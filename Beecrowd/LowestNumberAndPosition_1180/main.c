#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,menor,posicao;
    scanf("%d",&N);
    int X[N];

    for(int i=0;i<N;i++){
        scanf("%d",&X[i]);
        if(i==0){
            menor=X[i];
            posicao=i;
        }
        if(menor>X[i]){
            menor=X[i];
            posicao=i;
        }
    }

    printf("Menor valor: %d\nPosicao: %d",menor, posicao);

    return 0;
}
