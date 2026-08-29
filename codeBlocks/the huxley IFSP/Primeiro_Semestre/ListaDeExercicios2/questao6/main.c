#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int maior,soma,resto,andar,minutos;

    scanf("%d %d %d", &a, &b, &c);
    maior=a;
    soma=a+b+c;

    //if(b>maior) maior=b;
    //if(c>maior) maior=c;

    if(b>maior){
        maior=b;
    }
    if(c>maior){
        maior=c;
    }

    resto=soma-maior;

    if(resto>maior){
        andar=2;
        minutos=2*resto;
    }
    else{
        if(maior==a){
            andar=1;
            minutos=(b*2)+(c*4);
        }
        else if(maior==b){
            andar=2;
            minutos=resto*2;
        }
        else{
            andar=3;
            minutos=(a*4)+(b*2);
        }
    }

    printf("%d\n",minutos);

    return 0;
}
