#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,a,b;
    scanf("%d %d", &m, &a);
    b = 0;

    if((a%400 == 0) || ((a%100 != 0) && (a%4 == 0))){
        b++;
    }

    switch(m){
    case 1: (printf("31")); break;
    case 2:
        if(b == 0){
            (printf("28"));
        }
        else{
            if(b == 1){
            (printf("29"));
            }
        }
        break;
    case 3: (printf("31")); break;
    case 4: (printf("30")); break;
    case 5: (printf("31")); break;
    case 6: (printf("30")); break;
    case 7: (printf("31")); break;
    case 8: (printf("31")); break;
    case 9: (printf("30")); break;
    case 10: (printf("31")); break;
    case 11: (printf("30")); break;
    case 12: (printf("31")); break;
    }

    return 0;
}
