#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n,cont=0,i=1;
    scanf("%d %d",&x, &n);

    while(x*i<n){
        i++;
        cont++;
    }

    printf("o numero %d tem %d multiplos menores que %d.\n",x,cont,n);

    return 0;
}
