#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,num,cont=0;
    scanf("%d %d ",&x, &y);

    for(int i = 0;i<x;i++){
        scanf("%d",&num);
        if(num==y){
            cont++;
        }
    }

    printf("%d\n",cont);

    return 0;
}
