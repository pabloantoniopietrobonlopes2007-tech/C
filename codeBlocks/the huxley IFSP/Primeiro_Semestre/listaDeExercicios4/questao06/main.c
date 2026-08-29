#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,figurinha[1000],j=0,m=0,cont1=0,cont2=0,menor,aux;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&figurinha[i]);
    }
    for(int i=0;i<n;i++){
        menor=i;
        for(int j=i+1;j<n;j++){
            if(figurinha[menor]>figurinha[j]){
                menor=j;
            }
        }
        if(menor!=i){
            aux=figurinha[i];
            figurinha[i]=figurinha[menor];
            figurinha[menor]=aux;
        }
    }
    if(figurinha[0]%2==0){
        j+=figurinha[0];
        cont1++;
    }
    else{
        m+=figurinha[0];
        cont2++;
    }
    for(int i=1;i<n;i++){
        if(figurinha[i]!=figurinha[i-1]){
            if(figurinha[i]%2==0){
                j+=figurinha[i];
            }
            else{
                m+=figurinha[i];
            }
        }
        if(figurinha[i]%2==0){
            cont1++;
        }
        else{
            cont2++;
        }
    }
    printf("%d %d\n",cont1,cont2);
    if(j>m){
        printf("%d\n",j);
    }
    else{
        printf("%d\n",m);
    }
    return 0;
}
