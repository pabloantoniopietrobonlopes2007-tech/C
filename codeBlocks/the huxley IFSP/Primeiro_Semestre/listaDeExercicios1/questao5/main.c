#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    double m1, m2, m3;
    scanf("%d %d", &a, &b);
    m1 = (a + b)/2.00;
    m2 = (m1 + a)/2.00;
    m3 = (m2 + a)/2.00;
    printf("%.2lf", m3);

    return 0;
}
