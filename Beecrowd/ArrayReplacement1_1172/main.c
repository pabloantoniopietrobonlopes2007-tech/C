#include <stdio.h>

int main() {
    int X[10]={0};

    for(int i=0;i<10;i++){
        scanf("%d",&X[i]);
        if(X[i]<=0){
            X[i]=1;
        }
    }

    for(int j=0;j<10;j++){
        printf("X[%d] = %d\n",j,X[j]);
    }

    return 0;
}
