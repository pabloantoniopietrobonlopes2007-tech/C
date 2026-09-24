#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*p,menor,aux;


    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(p[j]<p[menor]){
                menor=j;
            }
        }

        if(p[menor]!=p[i]){
            aux=p[i];
            p[i]=p[menor];
            p[menor]=aux;

        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }



    return 0;
}
