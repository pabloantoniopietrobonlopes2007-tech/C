#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,repetido,k=0;
    int numeros[10];

    while(k<10){
        scanf("%d",&x);
        repetido=0;
        for(int i=0;i<k;i++){
            if(x==numeros[i]){
                repetido=1;
            }//1º if do 1º for

        }//1º for

        if(repetido==1){
            printf("Numero repetido,escolha outro.\n");
        }//if
        else{
            numeros[k]=x;
            k++;
            //printf("continue\n");
        }//else

    }//while

    for(int j=0;j<10;j++){
        printf("%d\n",numeros[j]);
    }

    return 0;
}
