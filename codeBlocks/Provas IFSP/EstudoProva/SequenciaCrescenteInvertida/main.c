#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int i,j;
    scanf("%d",&x);
    for(i=x;i>0;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
