#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,perfeito,cont=0;
    scanf("%d %d",&n, &perfeito);
    int ideias[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ideias[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if((ideias[j]+ideias[k]==perfeito)&&(j!=k)){
                cont++;
            }
        }
    }
    if(cont>=2){
        printf("SIM\n");
    }
    else{
        printf("NAO\n");
    }
    return 0;
}
