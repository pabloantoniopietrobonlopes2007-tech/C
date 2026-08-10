#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, c, f, r, m;
    double valor;
    scanf("%d %d %d %d %d", &h, &c, &f, &r, &m);
    valor = ((h*3)+(c*2.5)+(f*2.5)+r+(m*3));
    printf("Conta final: %.2lf", valor);

    return 0;
}
