#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    scanf("%d %d %d", &a, &b, &c);
    x = a;

    (b>x)?(x=b):(x=x);
    (c>x)?(x=c):(x=x);

    printf("%d",x);

    return 0;
}
