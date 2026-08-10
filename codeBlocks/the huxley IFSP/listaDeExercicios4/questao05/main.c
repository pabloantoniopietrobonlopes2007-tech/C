#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[1000],semRepetir[1000];
    char espaco=' ';
    int cont=0,menor,aux,rep,impares=0,n=0;
    while(espaco==' '){
        scanf("%d%c",&numeros[cont++],&espaco);
    }
    for(int i=0;i<cont;i++){
        menor=i;
        for(int j=i+1;j<cont;j++){
            if(numeros[menor]>numeros[j]){
                menor=j;
            }
        }
        if(menor!=i){
            aux=numeros[i];
            numeros[i]=numeros[menor];
            numeros[menor]=aux;
        }
    }
    for(int i=0;i<cont;i++){
        if(i==0){
            semRepetir[n++]=numeros[i];
        }
        else if(numeros[i]!=numeros[i-1]){
            semRepetir[n++]=numeros[i];
        }
    }
    for(int i=0;i<n;i++){
        rep=0;
        for(int j=0;j<cont;j++){
            if(semRepetir[i]==numeros[j]){
                rep++;
            }
        }
        if(rep%2!=0){
            printf("%d ",semRepetir[i]);
            impares++;
        }
    }
    if(impares==0){
        printf("N\n");
    }
    return 0;
}
