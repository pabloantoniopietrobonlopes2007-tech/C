#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, n3, m1, m2, m3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    m1 = (n1 + n2 + n3) / 3;
    m2 = ((n1 * 2) + (n2 * 2) + (n3 * 3)) / 7;
    m3 = (n1 + (n2 * 2) + (n3 * 2)) / 5;
    printf("%.2lf\n%.2lf\n%.2lf", m1, m2, m3);

    return 0;
}
