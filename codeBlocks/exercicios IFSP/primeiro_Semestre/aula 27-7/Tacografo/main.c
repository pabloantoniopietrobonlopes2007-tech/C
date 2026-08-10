#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,r=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        r+=x*y;
    }
    printf("%d\n",r);

    return 0;
}
