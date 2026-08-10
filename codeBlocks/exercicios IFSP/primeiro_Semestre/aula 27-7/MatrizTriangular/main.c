#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,cont=0;
    scanf("%d",&n);
    int matriz[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
            if(i>j&&matriz[i][j]!=0){
                cont++;
            }
        }
    }

    //soma==0?printf("true"): printf("false");

    if(cont==0){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}
