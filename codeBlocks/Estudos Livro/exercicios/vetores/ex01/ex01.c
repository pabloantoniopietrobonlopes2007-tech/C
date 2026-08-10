#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[6];
    for (int i=0; i<6;i++){
        scanf("%d",&numeros[i]);
    }
    for (int i=0; i<6;i++){
        printf("%d ",numeros[i]);
    }
    return 0;
}
