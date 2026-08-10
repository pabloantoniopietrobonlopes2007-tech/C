#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,r;
    int digitos=0,impar=0,par=0;
    scanf("%d",&x);

    //executa enqunto ainda tem digitos para contar
    while(x>0){

        //retira o primeiro numero
        r = x%10;
        digitos++;

        //ve se é par ou impar
        if(r%2==0){
            par++;
        }
        else{
            impar++;
        }

        //transforma o x em x sem o primeiro digito
        x=(x/10);
    }

    printf("digitos: %d\nimpares: %d\npares: %d",digitos, impar, par);

    return 0;
}
