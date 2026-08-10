#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);

    for(int i=1;i<=x;i++){//linhas

        for(int j=1;j<=i;j++){//colunas
            printf("%d",i);

            if(j!=i){
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
