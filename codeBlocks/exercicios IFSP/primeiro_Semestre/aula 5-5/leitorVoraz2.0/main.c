#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paginas,parada,anterior=0,lidas=0,maior=0,quant=0;

    scanf("%d",&paginas);

    for(int i=1;i<=7;i++){
        scanf("%d",&parada);
        quant=parada-anterior;
        anterior=parada;

        if(maior<quant){
            maior=quant;
        }
        anterior=parada;
    }

    printf("%d\n%d",parada,maior);

    return 0;
}
