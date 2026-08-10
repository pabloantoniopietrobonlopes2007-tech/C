#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],C[20],teste,k=0;
    for(int i = 0;i<10;i++){
        scanf("%d",&A[i]);
    }
    for(int i = 0;i<10;i++){
        scanf("%d",&B[i]);
    }
    for(int i = 0;i<10;i++){
        teste=0;
        for(int j = 0;j<10;j++){
            if(A[i]==B[j]){
                teste++;
            }
        }
        if(teste==0){
            C[k]=A[i];
            k++;
        }
    }
    for(int i = 0;i<k;i++){
        printf("%d\n",C[i]);
    }

    return 0;
}
