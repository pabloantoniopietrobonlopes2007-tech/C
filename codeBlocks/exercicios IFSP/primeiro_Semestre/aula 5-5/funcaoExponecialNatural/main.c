#include <stdio.h>
#include <stdlib.h>

int main()
{
    double resultado=1,ex=1,x,fatorial=1;
    int n;

    scanf("%lf %d", &x, &n);


    for(int i=1;i<n;i++){//numero de somas
        fatorial=fatorial*i;
        ex=ex*x;

        resultado+=(ex/fatorial);

    }

    printf("%.5lf\n",resultado);

    return 0;
}
