#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[1000],frequencia[1000]={0};
    int n,menor,aux,cont=1;
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

    for(int i=1;i<n;i++){
    if(numeros[i] == numeros[i-1]){
        cont++;
    }
    else{
        printf("%d %d\n", numeros[i-1], cont);
        cont = 1;
        }
    }

    printf("%d %d\n", numeros[n-1], cont);

    return 0;
}
