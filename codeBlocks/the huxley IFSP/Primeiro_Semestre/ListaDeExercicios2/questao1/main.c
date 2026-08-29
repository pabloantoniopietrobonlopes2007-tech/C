#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,km;
    double v;
    scanf("%d %d", &d,&km);

    if(km<=(d*100)){
        v = d*90.00;
    }
    else{
        v = (90.00*d) + ((km - (d*100))*12.00);
    }

    printf("%.2lf", v);

    return 0;
}
