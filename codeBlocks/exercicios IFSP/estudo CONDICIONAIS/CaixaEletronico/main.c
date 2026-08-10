#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, r, n100=0,n50=0,n20=0,n10=0,n5=0,n2=0,n1=0;
    scanf("%d", &x);
    r = x;

    if(x>=100){
        n100 = r / 100;
        r = x%100;
    }

    if(r>=50){
        n50 = r / 50;
        r = r%50;
    }

    if(r>=20){
        n20 = r / 20;
        r = r%20;
    }

    if(r>=10){
        n10 = r / 10;
        r = r%10;
    }

    if(r>=5){
        n5 = r / 5;
        r = r%5;
    }

    if(r>=2){
        n2 = r / 2;
        r = r%2;
    }

    if(r>=1){
        n1 = r / 1;
        r = r%1;
    }

    printf("100: %d\n", n100);
    printf("50: %d\n", n50);
    printf("20: %d\n", n20);
    printf("10: %d\n", n10);
    printf("5: %d\n", n5);
    printf("2: %d\n", n2);
    printf("1: %d\n", n1);

    return 0;
}
