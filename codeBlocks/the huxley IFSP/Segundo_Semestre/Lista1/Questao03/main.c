#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char dicionario[50][3][101],frase[50][20][101],traduzida[50][101];
    char aux[101],espaco;

    for(int i=0;i<n;i++){
        scanf("%s%s%s%*c",dicionario[i][0],dicionario[i][1],dicionario[i][2]);
    }

    int i=0;
    while(strcmp(aux,"*")!=0){
        scanf("%s",aux);
        espaco=getchar();

        for(int j=0;j<n;j++){
            if(strcmp(aux,dicionario[j][0])==0){
                strcat(traduzida[i],dicionario[j][2]);
                strcat(traduzida[i]," ");
            }
        }

        if(espaco=='\n'){
            i++;
        }

    }

    for(int i=0;i<n;i++){
        printf("%s\n",traduzida[i]);
    }

    return 0;
}
