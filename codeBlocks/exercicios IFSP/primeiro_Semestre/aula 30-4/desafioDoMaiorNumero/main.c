#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,maior=0;
    do{
        scanf("%d",&x);
        if(x>maior){
            maior=x;
        }
    }while(x!=0);

    printf("%d",maior);

    return 0;
}
