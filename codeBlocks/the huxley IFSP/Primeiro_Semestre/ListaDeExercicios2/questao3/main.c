#include <stdio.h>
#include <stdlib.h>

int main()
{
    double l,a;
    scanf("%d %d", &l, &a);

    if(l*8>=a){
        printf("A");
    }
    else if(l*12>=a){
        printf("B");
    }
    else if(l*18>=a){
        printf("C");
    }
    else{
        printf("D");
    }

    return 0;
}
