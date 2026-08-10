#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, x;
    scanf("%d %d %d", &a, &b, &c);
    if(b<a){
        x = a;
        a = b;
        b = x;
    }
    if(c<a){
        x = a;
        a = c;
        c = x;
    }
    if(c<b){
        x = c;
        c = b;
        b = x;
    }
    printf("%d\n%d\n%d\n", a, b ,c);

    return 0;
}
