#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    scanf("%d",&numero);

    for(int i = numero;i>0;i--){
        if(numero%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}
