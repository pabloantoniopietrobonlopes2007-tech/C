#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero,primeiros,ultimos,teste;
    do{
        scanf("%d",&numero);
        primeiros=numero%100;
        ultimos=numero/100;
        teste=pow(primeiros+ultimos,2);

        if((numero>9999)||(numero<1000)){
            break;
        }

        if(teste==numero){
            printf("propriedade do 3025!\n");
        }
        else{
            printf("numero comum\n");
        }

    }while((numero<=9999)&&(numero>=1000));

    return 0;
}
