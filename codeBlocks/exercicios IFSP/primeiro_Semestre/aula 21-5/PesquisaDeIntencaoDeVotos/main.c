#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesquisas;
    double diferenca=0;
    scanf("%d",&pesquisas);
    double candidato[pesquisas],concorrente[pesquisas];
    for(int i=0;i<pesquisas;i++){
        scanf("%lf",&candidato[i]);
    }
    for(int i=0;i<pesquisas;i++){
        scanf("%lf",&concorrente[i]);
    }
    for(int j=0;j<pesquisas;j++){
        if(candidato[j]>concorrente[j]){
            if(diferenca<candidato[j]-concorrente[j]){
                diferenca=candidato[j]-concorrente[j];
            }
        }
    }
    printf("%.2lf\n",diferenca);

    return 0;
}
