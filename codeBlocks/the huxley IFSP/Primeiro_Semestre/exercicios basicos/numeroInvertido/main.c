#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, u, d, c, inver;
    scanf("%d", &num);
    u = (num%10);
    d = ((num%100) / 10);
    c = (num/100);
    inver = ((u * 100) + (d * 10) + c);
    printf("%d\n", inver);

    return 0;
}
