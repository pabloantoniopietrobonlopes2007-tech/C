#include <stdio.h>
#include <stdlib.h>

int main()
{
    int atual,proximo=1986;
    scanf("%d",&atual);

    while(proximo<=atual){
        proximo+=76;
    }

    printf("%d", proximo);

    return 0;
}
