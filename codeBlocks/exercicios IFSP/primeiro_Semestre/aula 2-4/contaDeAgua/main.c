#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    scanf("%d", &c);
    int t = 7;

    if(c <= 10){
        printf("%d",t);
    }

    else if(c<=30){
        t = (7 + (c - 10));
        printf("%d", t);
    }

    else if(c <= 100){
        t = (27 + ((c - 30)*2) );
        printf("%d", t);
    }

    else if(c > 100){
        t = (167 + ((c - 100)*5) );
        printf("%d", t);
    }

    return 0;
}
