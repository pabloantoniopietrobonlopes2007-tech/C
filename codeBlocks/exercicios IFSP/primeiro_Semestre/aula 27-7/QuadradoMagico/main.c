#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=3,comp1=0,comp2=0,comp3=0,comp4=0,magico=1,soma;
    int matriz[n][n];

    //leitura
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matriz[i][j]);
        }
    }


    //comparação
    for(int i=0;i<3;i++){
        comp1=0;
        comp2=0;
        for(int j=0;j<3;j++){
            //linha
            comp1+=matriz[i][j];
            //coluna
            comp2+=matriz[j][i];
            //diagonal principal
            if(i==j){
                comp3+=matriz[i][j];
            }

            //if(j==(n-i-1)){
            if(i==0&&j==2||i==1&&j==1||i==2&&j==0){
                comp4+=matriz[i][j];
            }

        }//i

        //acha a comparação
        if(i==0){
            soma=comp1;
        }

        //comapara cada uma
        if((comp1!=soma)&&(comp2!=soma)){
            magico=0;
        }
    }

    if((comp3!=soma)&&(comp4!=soma)){
            magico=0;
        }

    if(magico==1){
        printf("MAGICO\n");
    }
    else{
        printf("NAO MAGICO\n");
    }

    return 0;
}
