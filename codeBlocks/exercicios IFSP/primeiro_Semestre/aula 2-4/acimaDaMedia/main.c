#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    double a,b,c,m;
    scanf("%lf %lf %lf", &a, &b, &c);
    m = (a+b+c)/3;

    if(a>m){
        x++;
    }
    if(b>m){
        x++;
    }
    if(c>m){
        x++;
    }
    printf("%d", x);

    return 0;
}
