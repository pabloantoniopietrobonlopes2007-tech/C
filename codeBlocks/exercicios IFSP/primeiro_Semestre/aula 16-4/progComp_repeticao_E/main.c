#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,r;
    scanf("%d", &x);
    for(int m = 1;m<11;m++){
        r=x*m;
        printf("%d x %d = %d\n", x, m, r);
        //printf("%d x %d = %d\n", x, m, x*m);
    }

    return 0;
}
