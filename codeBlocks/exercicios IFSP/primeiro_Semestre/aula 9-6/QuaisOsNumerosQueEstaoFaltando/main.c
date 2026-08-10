#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[1000],v2[1000],v3[1000];
    int n1=0,n2=0,comp,cont=0,maior,aux;
    char c;

    do{
    scanf("%d%c",&v1[n1++],&c);
    }while(c==' ');

    while(scanf("%d%c",&v2[n2++],&c)>0);

    for(int i=0;i<n1;i++){
        comp=0;
        for(int j=0;j<n2;j++){
            if(v1[i]==v2[j]){
                comp++;
            }
        }
        if(comp==0){
            v3[cont]=v1[i];
            cont++;
        }
    }

    for(int i=0;i<cont;i++){
        maior=i;
        for(int j=i+1;j<cont;j++){
            if(v3[maior]<v3[j]){
                maior=j;
            }
        }
        aux=v3[i];
        v3[i]=v3[maior];
        v3[maior]=aux;
    }

    for(int i=0;i<cont;i++){
        printf("%d ",v3[i]);
    }

    return 0;
}
