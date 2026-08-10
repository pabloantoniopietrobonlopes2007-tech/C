#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,menor,aux;
    scanf("%d",&n);
    int vetor[n];
    for(int x = 0;x < n; x++){
        scanf("%d",&vetor[x]);
    }

    for(int x=0;x<n;x++){
        menor=x;
        for(int y=x+1;y<n;y++){
            if(vetor[menor]>vetor[y]){
                menor=y;
            }
        }
        if(menor!=x){
            aux=vetor[menor];
            vetor[menor]=vetor[x];
            vetor[x]=aux;
        }
    }

    for(int x = 0;x < n; x++){
        printf("[%d]",vetor[x]);
        if(x!=n-1){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
