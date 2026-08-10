#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[4][4];
    int maiores=0;

    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            scanf("%d",&matriz[i][j]);
            if(matriz[i][j]>10){
                maiores++;
            }
        }
    }
    printf("%d", maiores);


    return 0;
}
