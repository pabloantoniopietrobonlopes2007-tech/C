#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double cat1, cat2, hip;
    scanf("%lf %lf", &cat1, &cat2);
    hip = sqrt(pow(cat1,2) + pow(cat2,2));
    printf("%.2lf", hip);

    return 0;
}
