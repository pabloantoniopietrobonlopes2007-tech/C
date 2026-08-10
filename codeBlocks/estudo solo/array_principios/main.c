#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaração
    //<tipo de dado> <nome>[<tamanho>]
    int numeros1[10];//array é declarado com 10 numeros aleatorios
    int numeros2[10]={0};//array é declarado com 10 zeros

    //leitura de dos elementos do array
    for(int i=0;i<10;i++){
        scanf("%d",&numeros1[i]);
    }
    //printar os 10 elementos em ordem de entrada
    for(int i=0;i<10;i++){
        printf("%d ",numeros1[i]);
    }
    return 0;
}
