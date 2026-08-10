#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;
    int meio = 0;

    scanf("%d %d %d", &a, &b, &c);
    if ((a>=b)&&(a<=c) || (a<=b)&&(a>=c)){
        meio = a;
    }
    else{
        if ((b>=a)&&(b<=c) || (b<=a)&&(b>=c)){
                meio = b;
    }
    else{
        if ((c>=a)&&(c<=b) || (c<=a)&&(c>=b)){
            meio = c;
            }
        }
    }
    printf("%d", meio);

    return 0;
}
