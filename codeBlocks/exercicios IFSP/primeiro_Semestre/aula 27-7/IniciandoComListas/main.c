#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],soma=0;
    double media=0;
    for(int i=0;i<10;i++){
        scanf("%d",&vetor[i]);
        media+=vetor[i];
        if(vetor[i]%3==0){
            soma+=vetor[i];
        }
    }
    media=media/10;

    printf("Média: %.1lf\nDivisíveis: %d\n",media,soma);

    return 0;
}
