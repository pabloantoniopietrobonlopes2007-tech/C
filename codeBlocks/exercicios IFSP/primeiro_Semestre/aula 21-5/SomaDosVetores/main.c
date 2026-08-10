#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[10],v2[10],v3[10];
    for(int i=0;i<10;i++){
        scanf("%d",&v1[i]);
    }
    for(int i=0;i<10;i++){
        scanf("%d",&v2[i]);
    }
    for(int i=0;i<10;i++){
        v3[i]=v1[i]+v2[i];
    }
    for(int i=0;i<10;i++){
        printf("%d",v3[i]);
        if(i!=9){
            printf(" ");
        }
    }

    return 0;
}
