#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, t;
    scanf("%d",&c);

    if(c>100){
        t += (c - 100)*5;
        c = 100;
    }

    if(c>30){
        t += (c-30)*2;
        c -=70;
    }

    if(c>10){
        t += (c - 10);
    }

    if((c>0)&&(c<10)){
        t += 7;
    }

    printf("d", t);

    return 0;
}
