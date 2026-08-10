#include <stdio.h>
#include <stdlib.h>

int main()
{
    int empressas, falta, total;
    float percent;
    scanf("%d %f", &empressas, &percent);
    total = (empressas * 100) / percent;
    falta = total - empressas;
    printf("O documento possui %d paginas\n", total);
    printf("Ja foram impressas %d paginas\n", empressas);
    printf("Faltam %d paginas\n", falta);

    return 0;
}
