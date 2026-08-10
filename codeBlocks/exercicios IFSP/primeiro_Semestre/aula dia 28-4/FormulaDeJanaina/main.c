#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,resultado;
    scanf("%d %d",&a, &b);

    for(a;a<=b;a++){
        resultado=pow(a,2)-4*a+5;
        printf("%d\n",resultado);
    }

    return 0;
}
