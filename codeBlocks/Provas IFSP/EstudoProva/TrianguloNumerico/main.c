#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}
