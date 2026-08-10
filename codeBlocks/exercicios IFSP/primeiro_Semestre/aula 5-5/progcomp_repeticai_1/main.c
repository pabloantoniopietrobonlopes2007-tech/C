#include <stdio.h>
#include <stdlib.h>

int main()
{
    double base,resultado=1;
    int expoente;
    scanf("%lf %d", &base, &expoente);

    for(int i=1;i<=expoente;i++){
        resultado=resultado*base;
    }
    printf("%.2lf\n",resultado);

    return 0;
}
