#include <stdio.h>
#include <stdlib.h>

void copa(int n){

    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
           printf(" ");
        }
        for(int j=1;j<=2*i;j++){
            printf("X");
        }
        printf("\n");
    }

}

void tronco(int n){

    for(int i=1;i<=n/2;i++){
        for(int j=0;j<n-1;j++){
            printf(" ");
        }
        printf("XX\n");
    }

}

void arvore(int n){
    copa(n);
    tronco(n);
}

int main()
{
    int n;
    scanf("%d",&n);
    arvore(n);

    return 0;
}
