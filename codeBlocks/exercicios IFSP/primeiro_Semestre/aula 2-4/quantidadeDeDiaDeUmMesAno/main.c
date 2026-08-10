#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, a, b = 0;
    scanf("%d %d", &m, &a);

    /*if(a % 100 == 0){
        if(a % 400 == 0){
            b = 1;
        }
        else{
            b = 0;
        }
    }
    else{
        if(a % 4 == 0){
            b = 1;
        }
        else{
            b = 0;
        }
    }*/

    if((a%400==0)||((a%4==0)&&(a%100!=0))){
        b++;
    }

    if((m == 1)||(m == 3)||(m == 5)||(m == 7)||(m == 8)||(m == 10)||(m == 12)){
        printf("31");
    }

    if((m == 4)||(m == 6)||(m == 9)||(m == 11)){
        printf("30");
    }

    if((b == 1)&&(m == 2)){
        printf("29");
    }

    if((b == 0)&&(m == 2)){
        printf("28");
    }

    return 0;
}
