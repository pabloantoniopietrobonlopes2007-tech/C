#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,comp=1;

    scanf("%d",&n);

    int alturas[n];

    for(int i=0;i<n;i++){
        scanf("%d",&alturas[i]);
    }

    int sinal = alturas[1] - alturas[0];

    if(sinal == 0)
        comp = 0;

    for(int i = 1; i < n-1 && comp; i++){
        int atual = alturas[i+1] - alturas[i];

        if(atual == 0 || sinal * atual >= 0)
            comp = 0;

        sinal = atual;
    }

    printf("%d\n",comp);

    return 0;
}
