#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);

    for(x;x<=y;x++){
        if((x%10!=0)&&(x%(x/10)==0)){
            printf("%d",x);
        }
    }

    return 0;
}
