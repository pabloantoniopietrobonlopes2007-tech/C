#include <stdio.h>
#include <stdlib.h>


int main()
{
    int qtd[3],hr,max=0,x;
    for(int i=0;i<3;i++){
        scanf("%d",&qtd[i]);
        if(i>0){
            x=(qtd[i-1]+qtd[i]+(abs(qtd[i-1]-qtd[i])))/2;
        }
        if(max<x){
            max=x;
        }
    }
    scanf("%d",&hr);
    max=max*hr;
    printf("%d\n",max);

    return 0;
}
