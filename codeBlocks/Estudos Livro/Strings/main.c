#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[20],nome2[30];

    fgets(nome1,20,stdin);
    fgets(nome2,30,stdin);

    int comp = strcasecmp(nome1,nome2);

    printf("%d", comp);

    return 0;
}
