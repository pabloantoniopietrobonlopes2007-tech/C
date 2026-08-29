#include <stdio.h>
#include <stdlib.h>

int main()
{
    float antes, depois;
    int hr;
    scanf("%f %d", &antes, &hr);
    depois = (antes + (hr * (antes/44) * 1.1));
    printf("%.2f", depois);

    return 0;
}
