#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3],soma[3]={0,0,0};

    for(int i=0;i<3;i++){//i = linhas
        for(int j=0;j<3;j++){//j = colunas
            scanf("%d",&matriz[i][j]);

            if(j==0){
                soma[0]+=matriz[i][0];
            }
            else if(j==1){
                soma[1]+=matriz[i][1];
            }
            else if(j==2){
                soma[2]+=matriz[i][2];
            }
        }
    }

    for(int k=0;k<3;k++){
        printf("%d ",soma[k]);
    }

    return 0;
}
