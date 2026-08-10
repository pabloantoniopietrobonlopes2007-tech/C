#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fatorial=1;
    scanf("%d",&n);

    for(int i=n;i>0;i--){
        fatorial=fatorial*i;
    }

    printf("%d",fatorial);

    return 0;
}
