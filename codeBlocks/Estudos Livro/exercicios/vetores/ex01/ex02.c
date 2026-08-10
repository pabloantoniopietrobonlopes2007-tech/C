#include <stdio.h>

int ex02(){
    int numeros[6];
        for(int i = 0;i<6;i++){
            scanf("%d",&numeros[i]);
        }
        for(int i = 5;i>=0;i--){
            printf("%d",&numeros[i]);
    }
    return 0;
}
