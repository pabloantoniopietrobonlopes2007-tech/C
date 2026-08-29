#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B, b, h;
    double area;
    scanf("%d %d %d", &b, &B, &h);
    area = ((B + b) * h) / 2.0;
    printf("%.1lf", area);

    return 0;
}
