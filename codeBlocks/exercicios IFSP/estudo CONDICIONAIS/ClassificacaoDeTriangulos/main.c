#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, classificacao;
    scanf("%d %d %d", &a, &b, &c);

    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        if((a==b)&&(b==c)){
            classificacao = 1;
        }

        else if((a==b)||(b==c)||(a==c)){
            classificacao = 2;
        }

        else{
            classificacao = 3;
        }

        switch(classificacao){
        case 1:
            printf("triangulo equilatero"); break;
        case 2:
            printf("triangulo isoceles"); break;
        case 3:
            printf("triangulo escaleno"); break;
        }

    }
    else{
        printf("nao forma um triangulo");
    }



    return 0;
}
