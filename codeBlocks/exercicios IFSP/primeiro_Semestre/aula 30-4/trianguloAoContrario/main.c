#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d",&x);

    for(int i=x;i>0;i--){//linhas
        y=x-i;

        for(int j=x;j>0;j--){//colunas
            if(y>0){
                printf(" ");
                y--;
            }
            else{
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
