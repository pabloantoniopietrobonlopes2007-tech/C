#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[31],codificado[31];
    int x,cont=0;


    scanf("%[^\n]",palavra);
    scanf("%d",&x);

    while(palavra[cont]!='\0'){
        if(palavra[cont]>='A'&&palavra[cont]<='Z'){
            palavra[cont]+=32;
        }

        codificado[cont]=palavra[cont]+x;

        cont++;
    }

    printf("%s\n",codificado);


    return 0;
}
