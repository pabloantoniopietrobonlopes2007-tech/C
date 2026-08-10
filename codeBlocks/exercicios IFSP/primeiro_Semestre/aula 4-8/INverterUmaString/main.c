#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[256],invertido[256];
    scanf("%255[^\n]",palavra);
    int cont=0;
    while(palavra[cont]!='\0'){
        cont++;
    }
    for(int i=cont-1;i>=0;i--){
        invertido[cont-i-1]=palavra[i];
    }
    invertido[cont]='\0';
    printf("%s\n",invertido);

    return 0;
}
