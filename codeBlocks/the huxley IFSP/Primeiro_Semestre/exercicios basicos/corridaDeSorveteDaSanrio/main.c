#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B, K, T, X, Y;
    scanf("%d%d %d", &B, &K, &T);
    X = B / T;
    Y = K / T;
    printf("Badtz-Maru comeu %d sorvetes.\nKeroppi comeu %d sorvetes.", X, Y);

    return 0;
}
