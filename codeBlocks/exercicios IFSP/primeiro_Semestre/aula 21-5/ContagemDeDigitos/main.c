#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,digito,aux;
    scanf("%d %d", &a, &b);
    while(a!=0 && b!=0){
        int contadores[10]={0};
        for(int i=a;i<=b;i++){
            aux=i;
            do{
                digito=aux%10;
                contadores[digito]++;
                aux=aux/10;
            }while(aux>0);
        }
        for(int i=0;i<10;i++){
        printf("%d",contadores[i]);
        if(i!=9){
            printf(" ");
        }
        }
        printf("\n");
        scanf("%d %d", &a, &b);
    }
    return 0;
}
