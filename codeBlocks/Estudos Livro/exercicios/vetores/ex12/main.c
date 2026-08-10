#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10],repetidos[5];
    int comp,k=0,i=0,j=0;
    for(int i = 0;i<10;i++){
        scanf("%d",&numeros[i]);
    }
    //le os 10 numeros

    for(i=0;i<10;i++){
        comp=0;
        for(int j = 0; j<10;j++){
            if((numeros[i]==numeros[j])&&(j!=i)){//testa igualdade de cada numero com os outros 9 do array
                comp=1;//repetidos
            }
        }
        if(comp==1){//se tem repetidos
            int jaTem=0;

            for(int x=0;x<k;x++){
                if(repetidos[x]==numeros[i]){//se ja tem esse numero no array do repetidos
                    jaTem=1;
                }
            }

            if(jaTem==0){//se nao tem esse numero no array do repetidos
                repetidos[k]=numeros[i];
                k++;
            }
        }
    }

    for(int i = 0;i<k;i++){
        printf("%d\n",repetidos[i]);
    }

    return 0;
}
