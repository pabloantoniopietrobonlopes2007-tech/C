#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x,x1,x2;

    printf("De as constantes A, B e C: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0){
        printf("Essa equacao nao e do segundo grau");
    }
    else{
        delta = b*b - 4*a*c;

        if (delta < 0){
            printf("A equacao nao tem raiz real");
        }
        else if (delta == 0){
            x = -b / (2*a);
            printf("A equacao tem uma raiz real: %.2f", x);
        }
        else{
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);

            printf("As raizes sao: %.2f e %.2f", x1, x2);
        }
    }

    return 0;
}
