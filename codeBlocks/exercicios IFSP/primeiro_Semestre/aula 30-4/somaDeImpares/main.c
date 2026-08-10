#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,impares=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x%2!=0){
            impares+=x;
        }
    }
    printf("%d",impares);

    return 0;
}
