#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12];
    double resultado=0,x;
    int linha;
    char equacao;

    scanf("%d",&linha);
    scanf(" %c",&equacao);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(int i=0;i<12;i++){
        resultado+=M[linha][i];
    }
    if(equacao=='M'){
        resultado=resultado/12;
    }

    printf("%.1lf\n",resultado);


    return 0;
}
