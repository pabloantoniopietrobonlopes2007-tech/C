#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[10][10];

        for (int j=0;j<10;j++){
            for (int i=0;i<10;i++){
                if(i<j){
                    matriz[i][j]=2*i+7*j-2;
                }
                else if(i==j){
                    matriz[i][j]=3*(i*i)-1;
                }
                else{
                    matriz[i][j]=4*(i*i*i)+5*(j*j)+1;
                }
            }
        }

        for (int j=0;j<10;j++){
            printf("\n");
            for (int i=0;i<10;i++){
                printf("%d ",matriz[i][j]);
            }
        }


    return 0;
}
