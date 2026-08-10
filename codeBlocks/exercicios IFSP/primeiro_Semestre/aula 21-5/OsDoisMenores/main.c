#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double m1=10,m2=10,soma=0,media;
    scanf("%d",&n);
    double notas[n];
    if(n<3){
        printf("Numero de notas insuficiente.");
    }
    else{
        for(int i=0;i<n;i++){
            scanf("%lf",&notas[i]);
            if(m1>notas[i]){
                m2=m1;
                m1=notas[i];
            }
            else if(m2>notas[i]){
                m2=notas[i];
            }
            soma+=notas[i];
        }
        media=(soma-(m1+m2))/(double)(n-2);
        printf("%.2lf\n",media);
    }
    return 0;
}
