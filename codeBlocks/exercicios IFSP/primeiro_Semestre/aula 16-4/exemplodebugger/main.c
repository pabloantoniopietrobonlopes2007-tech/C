#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c;
    scanf("%d", &a);
    if(a > 10){
        c = 2 * a;
    }
    else if(a >= 7){
        c = a + 2;
        a--;
    }
    else{
        c = a - 2;
    }
    a+=10;
    printf("a = %d, c = %d\n",a,c);
    return 0;
}
