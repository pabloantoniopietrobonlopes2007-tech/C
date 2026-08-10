#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes,quantidade[20],numeros[1000],modas[20],frequencia[1000]={0},semRepetir[1000];
    double medias[20]={0},medianas[20];
    int menor,aux,cont=0,meio,maiorFreq,nuns;

    //numero de testes
    scanf("%d",&testes);

    for(int i=0;i<testes;i++){
        //quantidade de numeros por teste
        scanf("%d",&quantidade[i]);

        //le os numeros
        for(int j=0;j<quantidade[i];j++){
            scanf("%d",&numeros[j]);
            medias[i]+=numeros[j];
        }

        //ordena em ordem crescente
        for(int k=0;k<quantidade[i];k++){
            menor=k;
            for(int l=k+1;l<quantidade[i];l++){
                if(numeros[l]<numeros[menor]){
                    menor=l;
                }
            }
            if(menor!=k){
                aux=numeros[k];
                numeros[k]=numeros[menor];
                numeros[menor]=aux;
            }
        }

        //moda
        //array sem repetidos
        cont=0;
        semRepetir[cont++] = numeros[0];

        for(int k=1;k<quantidade[i];k++){
            if(numeros[k]!=numeros[k-1]){
                semRepetir[cont++]=numeros[k];
            }
        }
        nuns=cont;

        //mais repetição
        maiorFreq=0;
        for(int k=0;k<nuns;k++){
            cont=0;
            for(int l=0;l<quantidade[i];l++){
                if(semRepetir[k]==numeros[l]){
                    cont++;
                }
            }
            frequencia[k]=cont;
            if(cont>maiorFreq){
                maiorFreq=cont;
            }
        }

        medias[i]=medias[i]/(double)quantidade[i];

        //mediana
        meio=quantidade[i]/2;
        if((quantidade[i]%2)!=0){
            medianas[i]=numeros[meio];
        }
        else{
            medianas[i]=(((double)numeros[meio]+numeros[meio-1])/2.00);
        }

        //sequencia
        printf("sequencia %d:\n",i+1);

        //ordem crescente
        for(int l=0;l<quantidade[i];l++){
            printf("%d ",numeros[l]);
        }
        printf("\n");

        //maior e menor
        printf("%d %d\n",numeros[0],numeros[quantidade[i]-1]);

        //media
        printf("%g\n",medias[i]);

        //moda
        if(maiorFreq>1){
            for(int l=0;l<nuns;l++){
                if(frequencia[l]==maiorFreq){
                    printf("%d ",semRepetir[l]);
                }
            }
            printf("\n");
        }
        else{
            printf("\n");
        }


        //mediana
        printf("%g\n",medianas[i]);
    }

    return 0;

}
