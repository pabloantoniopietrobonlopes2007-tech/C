#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digito,x;
    int a, b;
    scanf("%d %d", &a, &b);
    int vetor[10]={0};

    if((a!=0)&&(b!=0)){
        for(int i = a; i <= b;i++){
            x=i;

            if(x<10){
                    vetor[x]++;
                }
            else{
                while(x>0){
                    digito = x % 10;
                    vetor[digito]++;
                    x = x / 10;
                }
            }
        }
    }

    for(int k = 0;k < 10; k++){
        printf("%d",vetor[k]);
        if(k<9){
            printf(" ");
        }
    }
    return 0;
}
