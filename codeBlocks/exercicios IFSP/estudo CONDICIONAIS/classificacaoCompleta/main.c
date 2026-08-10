#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a,b,c;
    int menor, meio, maior;

    scanf("%d %d %d", &a, &b, &c);
    menor = a;
    maior = a;

    if (b>maior){
        maior = b;
    }
    else{
        menor = b;
    }
    if(c>maior){
        maior = c;
        }
    else{
        if(c<menor){
            menor = c;
        }
    }

    if((b>a)&&(b<c) || (b<a)&&(b>c)){
        meio = b;
    }
    else{
        if((c>a)&&(c<b) || (c<a)&&(c>b)){
        meio = c;
        }
    }

    if((a == menor) && (b == meio) && (c == maior)){
        printf("%d %d %d esta em ordem crescente", a, b, c);
    }
    else{
        if((c == menor) && (b == meio) && (a == maior)){
            printf("%d %d %d esta em ordem decrescente", a, b, c);
            }
            else{
                printf("%d %d %d esta em ordem aleatoria", a, b, c);
            }
        }
    */
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b) && ( a == c) && (b == c)){
        printf("iguais");
    }
    else{
        if((a >= b) && (b >= c)){
            printf("crescente");
            }
            else
        }






    return 0;
}
