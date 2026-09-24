#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*p,*q;
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    q = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        q[i]=p[i]*p[i];
        printf("%d ",q[i]);
    }



    return 0;
}
