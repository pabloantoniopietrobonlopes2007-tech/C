#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[8],x,y,soma;
    for(int i=0;i<8;i++){
        scanf("%d",&numeros[i]);
    }
    scanf("%d %d", &x,&y);
    soma=numeros[x]+numeros[y];
    printf("%d",soma);

    return 0;
}
