#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes,moda;
    int numeros[1000],quantidade[1000],semRepetir[1000],frequencia[1000];
    double media=0,mediana;
    int menor,aux,cont=0,max=0,maior=0;

    //numero de casos testes
    scanf("%d",&testes);

    //quantidade de numeros a cada teste
    for(int i=0;i<testes;i++){
        scanf("%d",&quantidade[i]);

        //numeros do teste
        media=0;
        for(int j=0;j<quantidade[i];j++){
            scanf("%d", &numeros[j]);
            media+=numeros[j];
        }

        //media
        media=(double)media/quantidade[i];

        //colocando em ordem crescente
        for(int j=0;j<quantidade[i];j++){
            menor=j;
            for(int k=j+1;k<quantidade[i];k++){
                if(numeros[k]<numeros[menor]){
                    menor=k;
                }
            }
            if(menor!=j){
                aux=numeros[j];
                numeros[j]=numeros[menor];
                numeros[menor]=aux;
            }
        }

        //vetor sem repetidos
        max=0;
        semRepetir[max++]=numeros[0];
        for(int j=1;j<(quantidade[i]);j++){
            if(numeros[j]!=numeros[j-1]){
                semRepetir[max++]=numeros[j];
            }
        }

        //frequencia
        maior=0;
        for(int j=0;j<max;j++){
            cont=0;
            for(int k=0;k<quantidade[i];k++){
                if(semRepetir[j]==numeros[k]){
                    cont++;
                }
            }
            frequencia[j]=cont;
            if(frequencia[j]>maior){
                maior=frequencia[j];
            }
        }

        //sequencia
        printf("sequencia %d:\n",i+1);

        //ordem crescente
        for(int j=0;j<quantidade[i];j++){
            printf("%d ",numeros[j]);
        }

        //maior e menor
        printf("\n%d %d\n",numeros[0],numeros[quantidade[i]-1]);

        //media
        printf("%g\n",media);

        //moda
        if(maior>1){
            for(int j=0;j<max;j++){
                if(frequencia[j]==maior){
                    printf("%d ",semRepetir[j]);
                }
            }
            printf("\n");
        }
        else{
            printf("\n");
        }

        //mediana
        if(quantidade[i]%2!=0){
            mediana=numeros[(quantidade[i]/2)];
        }
        else{
            mediana=(numeros[(quantidade[i]/2)]+numeros[(quantidade[i]/2)-1])/2.0;
        }
        printf("%g\n",mediana);
    }
    return 0;
}
