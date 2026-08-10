#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[1000],numeros1[1000],numeros2[1000],numeros3[1000],numeros4[1000],n;
    int menor,aux,maior;
    scanf("%d",&n);//tamanho do array
    //le os termos do array
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        numeros1[i]=array[i];
        numeros2[i]=array[i];
        numeros3[i]=array[i];
        numeros4[i]=array[i];
    }
    //organiza em ordem crescente: giovana
    for(int i=0;i<n;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(numeros1[menor]>numeros1[j]){
                menor=j;
            }
        }
        if(menor!=i){
            aux=numeros1[i];
            numeros1[i]=numeros1[menor];
            numeros1[menor]=aux;
        }
    }
    printf("Crescente(Giovana):\n");
    for(int i=0;i<n;i++){
        printf("%d ",numeros1[i]);
    }
    printf("\n");

    printf("Crescente(gpt):\n");
    //organiza em ordem crescente: gpt
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(numeros2[j]>numeros2[j+1]){
                aux=numeros2[j];
                numeros2[j]=numeros2[j+1];
                numeros2[j+1]=aux;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",numeros2[i]);
    }
    printf("\n");

    printf("Decrescente(Giovana):\n");
    //decrescente giovana/eu
    for(int i=0;i<n;i++){
        maior=i;
        for(int j=i+1;j<n;j++){
            if(numeros3[maior]<numeros3[j]){
                maior=j;
            }
        }
        if(maior!=i){
            aux=numeros3[i];
            numeros3[i]=numeros3[maior];
            numeros3[maior]=aux;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",numeros3[i]);
    }
    printf("\n");

    printf("Crescente(gpt):\n");
    //organiza em ordem crescente: gpt
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(numeros2[j]<numeros2[j+1]){
                aux=numeros2[j];
                numeros2[j]=numeros2[j+1];
                numeros2[j+1]=aux;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",numeros2[i]);
    }
    printf("\n");

    return 0;
}
