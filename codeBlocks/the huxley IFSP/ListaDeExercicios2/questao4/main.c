#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l;
    scanf("%d", &n);

    switch(n){
    case 1 : l=2 ; break;
    case 2 : l=5 ; break;
    case 3 : l=5 ; break;
    case 4 : l=4 ; break;
    case 5 : l=5 ; break;
    case 6 : l=6 ; break;
    case 7 : l=3 ; break;
    case 8 : l=7 ; break;
    case 9 : l=6 ; break;
    case 0 : l=6 ; break;
    }

    printf("%d leds",l);

    return 0;
}
