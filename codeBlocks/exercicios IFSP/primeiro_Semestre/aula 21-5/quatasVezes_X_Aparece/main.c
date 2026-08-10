#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10],x,cont=0;
    for(int i=0;i<10;i++){
        scanf("%d",&numeros[i]);
    }
    scanf("%d",&x);
    for(int j=0;j<10;j++){
        if(numeros[j]==x){
            cont++;
        }
    }
    printf("%d",cont);

    return 0;
}
