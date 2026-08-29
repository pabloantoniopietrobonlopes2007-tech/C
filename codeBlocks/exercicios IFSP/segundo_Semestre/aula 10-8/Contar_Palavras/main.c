#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[50]="Linguagem",b[50]="Programacao";
    strcpy(a,b);
    strcat(a,b);
    printf("%s\n",a);



    return 0;
}
