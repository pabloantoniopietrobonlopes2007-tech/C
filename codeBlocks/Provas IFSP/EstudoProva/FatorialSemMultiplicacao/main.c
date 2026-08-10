#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b;
    int fatorial,resultado=0;
    scanf("%d",&x);
    for(int i=0;i<=x;i++){
        resultado+=i;
        for(int j=i;j>=1;j--){
            fatorial+=resultado;
        }
    }
    printf("%d",fatorial);
    return 0;
}
