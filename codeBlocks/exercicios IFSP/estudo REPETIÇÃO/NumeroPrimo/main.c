#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,d;
    d=0;
    scanf("%d",&p);

    if(p<=1){
        d = 1;
    }

    for(int i=2;i*i<=p;i++){
        if(p%i==0){
            d = 1;
            break;
        }
    }

    if(d==0){
        printf("%d e primo", p);
    }
    else{
        printf("%d nao e primo", p);
    }

    return 0;
}
