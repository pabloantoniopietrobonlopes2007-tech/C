#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g350, g600, g2000;
    double litros;
    scanf("%d %d %d", &g350 ,&g600 ,&g2000);
    litros = (g350 * 0.35) + (g600 * 0.6) + (g2000 * 2);
    printf("Foram comprados %.1lf litros de refrigerante.", litros);

    return 0;
}
