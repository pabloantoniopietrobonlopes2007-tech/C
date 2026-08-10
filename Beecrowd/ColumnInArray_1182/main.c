#include <stdio.h>

int main() {
    double M[12][12];
    int coluna;
    char equacao;
    double resultado=0;

    scanf("%d",&coluna);
    scanf(" %c",&equacao);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(int i=0;i<12;i++){
        resultado+=M[i][coluna];
    }

    if(equacao=='M'){
        resultado/=12.00;
    }

    printf("%.1lf\n",resultado);

    return 0;
}
