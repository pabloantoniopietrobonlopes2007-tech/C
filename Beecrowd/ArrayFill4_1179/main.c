#include <stdio.h>

int main() {
    int par[5],impar[5];
    int x,contP=0,contI=0;

    for(int i=0;i<15;i++){
        scanf("%d",&x);

        if(x%2==0){
            par[contP]=x;
            contP++;
        }

        else{
            impar[contI]=x;
            contI++;
        }

        if(contP==5){
            contP=0;
            for(int i=0;i<5;i++){
                printf("par[%d] = %d\n",i,par[i]);
            }
        }

         if(contI==5){
             contI=0;
            for(int i=0;i<5;i++){
                printf("impar[%d] = %d\n",i,impar[i]);
            }
        }
    }

    for(int i=0;i<contI;i++){
        printf("impar[%d] = %d\n",i,impar[i]);
    }

    for(int i=0;i<contP;i++){
        printf("par[%d] = %d\n",i,par[i]);
    }

    return 0;
}
