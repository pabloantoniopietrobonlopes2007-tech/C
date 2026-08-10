#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b, crescente = 1;

    scanf("%d",&a);

    //ler numero ate aparecer um negativo
    while(crescente==1){
        scanf("%d",&b);

        //parada forçada
        if(b<0){
            break;
        }

        //verifica se é crescente
        if(b<a){
            crescente=0;
            break;
        }

        //substitui o valor novo na variavel do anterior
        a=b;

    }

    if(crescente==1){
        printf("crescente");
    }
    else{
        printf("nao crescente");
    }

    return 0;
}
