#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    do{
        scanf("%d",&x);
        char palavra[x];
        getchar();
        for(int i=0;i<x;i++){
            scanf("%c",&palavra[i]);
        }
        for(int j=x-1;j>=0;j--){
            printf("%c",palavra[j]);
        }
        printf("\n");
    }while(x>0);
    return 0;
}
