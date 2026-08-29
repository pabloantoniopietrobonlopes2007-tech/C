#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, h, m, s;
    scanf("%d", &n);
    s = n % 60;
    h = n /3600;
    m = (n/60) % 60;
    printf("%d h %d m %d s", h, m, s);

    return 0;
}
