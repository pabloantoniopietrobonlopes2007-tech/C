#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,salvos=0,parar=0,pessoas=0;
    char andares[10][6];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf(" %5[^\n]",andares[i]);

        for(int j=0;j<5;j++){
            if(andares[i][j]=='F'){
                parar=1;
            }
            if(parar==0&&andares[i][j]=='P'){
                salvos++;
            }
            if(andares[i][j]=='P'){
                pessoas++;
            }
        }
    }

    if(parar==1&&salvos==0){
        printf("Impossivel!\n");
    }

    if(salvos>0){
        printf("Resgatados: %d\n",salvos);
    }

    if(pessoas==0){
        printf("Predio vazio\n");
    }


    return 0;
}
