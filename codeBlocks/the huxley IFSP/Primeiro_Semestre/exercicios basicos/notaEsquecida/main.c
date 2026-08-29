#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, media;
    scanf("%d %d", &n1, &media);
    n1 = (media * 2) - n1;
    printf("%d", n1);

    return 0;
}
