#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x, c;
    double y, a, b,;
    scanf("%d", &x);
    a = pow(x,3) * 3.00;
    b = pow(x,2) * 2.oo;
    c = 3 * x;
    y = a - b + c -1;
    printf("Y = %.1lf", y);

    return 0;
}
