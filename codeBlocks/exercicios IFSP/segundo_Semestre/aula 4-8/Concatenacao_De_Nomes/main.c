#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[51],sobrenome[51],completo[102];
    scanf("%[^\n]%*c",nome);
    scanf("%[^\n]",sobrenome);

    strcpy(completo,nome);
    strcat(completo," ");
    strcat(completo,sobrenome);

    printf("%s\n",completo);

    return 0;
}
