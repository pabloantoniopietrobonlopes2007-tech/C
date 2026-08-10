#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carros,voltas,tempos[1000]={0},colocacao[1000];
    int aux,min;

    scanf("%d %d",&carros,&voltas);

    for(int i=0;i<carros;i++){
        for(int j=0;j<voltas;j++){
            scanf("%d",&aux);
            tempos[i]+=aux;
        }
        tempos[i]=colocacao[i]=tempos[i];
    }

    for(int i=0;i<carros;i++){
        min=i;
        for(int j=i+1;j<carros;j++){
            if(colocacao[min]>colocacao[j]){
                min=j;
            }
        }
        if(min!=i){
            aux=colocacao[i];
            colocacao[i]=colocacao[min];
            colocacao[min]=aux;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<carros;j++){
            if(colocacao[i]==tempos[j]){
                printf("%d\n",j+1);
            }
        }

    }

    return 0;
}
