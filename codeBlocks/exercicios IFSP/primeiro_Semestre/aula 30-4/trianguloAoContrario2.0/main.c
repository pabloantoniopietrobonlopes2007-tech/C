#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas,espacos;
    scanf("%d",&linhas);

    for(int i=linhas;i>0;i--){//numero de linhas
        espacos=linhas-i;//numeros de espaços em branco em cada linhas

        for(int j=linhas;j>0;j--){//numero de * da linhas

            if(espacos>0){
                printf(" ");
                espacos--;
            }
            else{
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}
