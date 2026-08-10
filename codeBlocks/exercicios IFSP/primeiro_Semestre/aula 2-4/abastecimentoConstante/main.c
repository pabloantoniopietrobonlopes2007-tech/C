#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, t, a,b,c,d,e;
    scanf("%d %d %d %d %d %d", &T, &a,&b,&c,&d,&e);
    t = (a+b+c+d+e);

    if(T == t){
        printf("Abastece perfeitamente.");
    }
    else{
        if(T > t){
            printf("Abastece e sobra: %d.", (T - (a+b+c+d+e)));
        }
        else{
            printf("Insuficiente.");
        }
    }

    return 0;
}
