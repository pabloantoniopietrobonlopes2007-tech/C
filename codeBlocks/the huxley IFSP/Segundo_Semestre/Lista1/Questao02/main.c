#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase1[301],frase2[301];
    int i=0,j=0;


    scanf("%[^\n]",frase1);

    while(frase1[i]!='\0'){
        if(frase1[i]!=' '){
            frase2[j]=frase1[i];
            j++;
        }
        else if(frase1[i]==' '&& frase1[i+1]!=' '){
            frase2[j]=' ';
            j++;
        }
        i++;
    }

    frase2[j]='\0';

    printf("%s\n",frase2);


    return 0;
}
