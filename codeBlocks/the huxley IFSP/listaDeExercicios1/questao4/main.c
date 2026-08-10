#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, m, a;
    scanf("%lf", &n);
    m = (n/2);
    a = (m + (m * 0.065));

    printf("Valor total da fatura: R$%.2lf\n",n);
    printf("Valor a apgar em marco: R$%.2lf\n",m);
    printf("Valor a pagar em abril: R$%.2lf\n",a);

    return 0;
}
