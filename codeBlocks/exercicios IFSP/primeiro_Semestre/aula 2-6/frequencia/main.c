#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[1000],frequencia[1000]={0},sequencia[1000];
    int n,menor,aux,cont=0,cont2=0;
    scanf("%d",&n);

    //le tds os numeros
    for(int i=0;i<n;i++){
        scanf("%d",&numeros[i]);
    }

    //bota em ordem crescente
    for(int i=0;i<n;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(numeros[menor]>numeros[j]){
                menor=j;
            }
        }
        aux=numeros[i];
        numeros[i]=numeros[menor];
        numeros[menor]=aux;
    }

    //sem repetidos
    for(int i=0;i<n;i++){
        if(numeros[i]!=numeros[i+1]){
            sequencia[cont]=numeros[i];
            cont++;
        }
    }

    //frequencia
    for(int i=0;i<cont;i++){
        for(int j=0;j<n;j++){
            if(sequencia[i]==numeros[j]){
                frequencia[i]++;
            }
        }
    }

    //saida
    for(int i=0;i<cont;i++){
            printf("%d ",sequencia[i]);
            printf("%d",frequencia[i]);
            printf("\n");
        }

    return 0;
}
