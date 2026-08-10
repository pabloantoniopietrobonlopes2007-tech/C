#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,comp=0;
    scanf("%d",&n);
    int vetor[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&vetor[i]);
    }

    for(int i=2;i<=n;i++){
        if(vetor[i]<vetor[i-1]){
            comp=i;
            break;
        }
    }

    printf("%d",comp);

    return 0;
}
