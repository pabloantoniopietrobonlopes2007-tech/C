#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a,b,c,d,e;
    int numeros[5] = {a,b,c,d,e};
    scanf("%d %d %d %d %d", &a ,&b ,&c ,&d ,&e);
    printf("%d", a+b+c+d+e);
    */

    int numeros[5];
    int total;

    for(int i = 0;i < 5; i++){
    scanf("%d", &numeros[i]);
    total += numeros[i];
    }
    printf("%d", total);


    return 0;
}
