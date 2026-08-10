#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,menor;
    scanf("%d",&x);
    menor=x;

    while(x!=0){
        scanf("%d",&x);
        if((x<menor)&&(x!=0)){
            menor=x;
        }
    }

    printf("%d",menor);

    return 0;
}
