#include <stdio.h>
#include <string.h>

int elemento(char nome[])
{
    if (strcmp(nome, "Planta") == 0)
        return 0;

    if (strcmp(nome, "Fogo") == 0)
        return 1;

    if (strcmp(nome, "Agua") == 0)
        return 2;

    return -1;
}

int main()
{
    char ataque[30], atacado[30];

    scanf("%s", ataque);
    scanf("%s", atacado);

    int a = elemento(ataque);
    int d = elemento(atacado);

    if (a == d)
        printf("Empate\n");

    else if ((a == 0 && d == 2) ||
             (a == 1 && d == 0) ||
             (a == 2 && d == 1))
        printf("Vantagem\n");

    else
        printf("Desvantagem\n");

    return 0;
}
