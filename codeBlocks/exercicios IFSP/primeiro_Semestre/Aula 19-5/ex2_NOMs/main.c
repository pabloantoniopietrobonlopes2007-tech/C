#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    double notas[x],pesos[x],produtos[x],media,soma=0,divisor=0;
    for(int i=0;i<x;i++){
        scanf("%lf",&notas[i]);
    }
    for(int i=0;i<x;i++){
        scanf("%lf",&pesos[i]);
    }
    for(int i=0;i<x;i++){
        produtos[i]=notas[i]*pesos[i];
        soma+=produtos[i];
        divisor+=pesos[i];
    }
    media=soma/divisor;
    printf("%.2lf",media);
    return 0;
}
