#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,s;
    double t;
    scanf("%d %lf %d", &i, &t, &s);

    if(((i<12)&&(t<37.5)&&(s==1))||(s==1)){
        printf("Baixo\n");
    }
    else if(((i<60)&&(t<39))||(s==2)){
        printf("Medio\n");
    }
    else if((i>60)||(t>39)||(s==3)){
        printf("Alto\n");
    }
    else{
        printf("Medio\n");
    }

    return 0;
}
