#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    int vetor[x];
    for(int i=0;i<x;i++){
        scanf("%d",&vetor[i]);
    }
    for(int i=x-1;i>=0;i--){
        printf("%d ", vetor[i]);
    }
    return 0;
}
