#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bandejas,copos,latas;
    int i,cont=0;
    scanf("%d",&bandejas);
    for(i=1;i<=bandejas;i++){
        scanf("%d %d",&latas, &copos);
        if(latas>copos){
            cont+=copos;
        }
    }
    printf("%d",cont);

    return 0;
}
