#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int v1[n], v2[n],v3[2*n];
    for(int i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&v2[i]);
    }
    for(int i=0;i<n;i++){
        v3[2*i] = v1[i];
        v3[2*i+1] = v2[i];
    }

    for(int i = 0; i < (2*n);i++){
        printf("%d\n", v3[i]);
    }

    return 0;
}
