#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[51],letra;
    int cont=0,rep=0;

    scanf("%[^\n]%*c",str);
    scanf(" %c",&letra);
    while(str[cont]!='\0'){
        cont++;
    }
    for(int i=0;i<cont;i++){
        if(str[i]==letra){
            rep++;
        }
    }

printf("%d\n",rep);


    return 0;
}
