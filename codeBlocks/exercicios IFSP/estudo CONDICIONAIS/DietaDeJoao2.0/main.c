#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e, menor, prato;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    menor = a;
    prato = 1;

    if(b<menor){
        menor = b;
        prato = 2;
    }
    if(c<menor){
        menor = c;
        prato = 3;
    }

    if(d<menor){
        menor = d;
        prato = 4;
    }

    if(e<menor){
        menor = e;
        prato = 5;
    }

    printf("joaozinho escolheu a opcao %d, com %d calorias", prato, menor);

    return 0;
}
