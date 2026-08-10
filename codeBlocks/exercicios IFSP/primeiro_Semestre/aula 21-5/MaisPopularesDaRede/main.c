#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,segue,x;
    int maior=0,mais_seguido=0;
    int seguidores[1000]={0};
    double porcent[1000]={0};

    scanf("%d",&n);

    for(int i=0;i<n;i++){//usuarios
        scanf("%d",&segue);

        for(int j=0;j<segue;j++){
            scanf("%d",&x);
            seguidores[x]++;
        }

        for(int k=0;k<n;k++){
            if(maior<seguidores[k]){
                maior=seguidores[k];
                mais_seguido=k;
            }

            porcent[k]=(seguidores[k]/(double)(n-1))*100;
        }
    }

    printf("%d\n",mais_seguido);
    for(int i=0;i<n;i++){
        printf("%.2lf%%\n",porcent[i]);
    }
    return 0;
}
