#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,f;
    double m,F;
    scanf("%lf %d %d", &m, &a, &f);
    F = 1-((double)f/a);


    if ((F>=0.75 && m>=5) || (F>=0.50 && m>=7)){
        printf("APROVADO");
        }
        else{
            printf("REPROVADO");
        }

    return 0;
}
