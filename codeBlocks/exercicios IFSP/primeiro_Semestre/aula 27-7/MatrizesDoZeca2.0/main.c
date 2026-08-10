#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int soma;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(i==0){
                    scanf("%d",&a[j][k]);
                    }
                else{
                    scanf("%d",&b[j][k]);
                }
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            soma=0;

            for(int k=0;k<3;k++){
                soma+=a[i][k]*b[k][j];
            }
            c[i][j]=soma;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
