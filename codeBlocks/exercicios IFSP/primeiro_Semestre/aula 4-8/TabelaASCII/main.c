#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palavra[101],upper[101];
    scanf("%100[^\n]",palavra);
    int x=0;
    while(palavra[x]!='\0'){
        if(palavra[x]>96&&palavra[x]<123){
            upper[x]=palavra[x]-32;
        }
        else{
            upper[x]=palavra[x];
        }
        x++;
    }

    upper[x]='\0';
    printf("%s",upper);
    return 0;
}
