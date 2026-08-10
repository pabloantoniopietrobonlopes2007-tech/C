#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int v[10],fre[10];
    int x,y,cont=1;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(v[i]!=-1){
                if((v[i]==v[j])&&(i!=j)){
                    v[j]=-1;
                    cont++;
               }
           }
        }
        fre[i]=cont;
        cont=1;

        //nao sai em ordem crescente
        if(v[i]>0){
            printf("%d %d\n",v[i],fre[i]);
        }
    }


    return 0;
}
