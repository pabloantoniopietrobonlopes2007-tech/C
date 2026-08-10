#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g,d,h,a;
    double c;
    scanf("%d %d %d %d", &g ,&d ,&h ,&a);

    switch(g){
    case 1 :(c += 27.4); break;
    case 2 :(c -= 10.5); break;
    case 3 :(c += 19.7); break;
    }
    //genero

    if(d == 1){
        c -= 41.3;
    }
    else{
        if(d == 2){
            c += 40.4;
        }
    }
    //dia

    switch(h){
    case 1 :(c -= 22.8); break;
    case 2 :(c += 11.4); break;
    case 3 :(c += 38.6); break;
    }
    //hora

    c += (a * 2.3);
    //amigos

    if(c<=40){
        printf("Melhor nao tentar.");
    }
    else{
        if(c<=80){
            printf("Chances boas, pode convidar.");
        }
        else{
            printf("Provavelmente vao aceitar.");
        }
    }

    printf("%.2lf",c);

    return 0;
}
