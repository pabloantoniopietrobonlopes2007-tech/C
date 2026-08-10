#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,aux,cont=0,menor;
    int v1[49],v2[49]={0};

    //tamanho do array
    scanf("%d",&n);


    //termos cm repeticao
    for(int i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }

    //ordenar vetor
    for(int i=0;i<n;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(v1[menor]>v1[j]){
                menor=j;
            }
        }
        aux=v1[i];
        v1[i]=v1[menor];
        v1[menor]=aux;
    }

    for(int i=0;i<n;i++){
        if(v1[i]!=v1[i-1]){
            v2[cont]=v1[i];
            cont++;
        }
    }

    /*//frequencia
    for(x=0;x<0;x++){
        if(freq[x]==0){
            cont=1;
            for(y=x+1;y<n;y++){
                if((v1[y]==v1[x])&&freq[y]==0){
                    cont++;
                    freq[y]=-1;
                }
            }
            freq[x]=cont;
        }
    }

    //montar v2
    for(x=0;x<n;x++){
        if(freq[x]>0){
            v2[z++]=v1[x];
        }
    }

    //ordenar v2
    for(x=0;x<z-1;x++){
        min=x;
        for(y=x+1;y<z;y++){
            if(v2[y]<v2[min]){
                min=y;
            }
        }
        if(min!=x){
            cont=v2[min];
            v2[min]=v2[x];
            v2[x]=cont;
        }
    }*/

    for(int i=0;i<cont;i++){
        printf("%d",v2[i]);
        if(i!=cont-1){
            printf(" ");
        }
    }

    return 0;
}
