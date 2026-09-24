#include <stdio.h>
#include <stdlib.h>

typedef struct{
        char carne[21];
        int validade;
    }tipo_peca;

int main()
{
    tipo_peca v[10],aux;

    int n,min;
    while(scanf("%d%*c",&n)>0){

        for(int i=0;i<n;i++){
            scanf("%s",v[i].carne);
            scanf("%d%*c",&v[i].validade);
        }

        for(int i=0;i<n;i++){
            min=i;
            for(int j=i+1;j<n;j++){
                if(v[j].validade<v[min].validade){
                    min=j;
                }
            }
            if(min!=i){
                aux=v[min];
                v[min]=v[i];
                v[i]=aux;
            }
        }

        for(int i=0;i<n;i++){
            if(i>0){
                printf(" ");
            }
            printf("%s",v[i].carne);
        }
        printf("\n");
    }


    return 0;
}
