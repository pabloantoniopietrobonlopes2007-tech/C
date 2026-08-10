#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    float a,b,c,m;

    scanf("%f %f %f", &a, &b, &c);
    float num[3] = {a,b,c};
    m = (a + b + c)/3;


    for(int i = 0; i < 3;i++){
        if(num[i]>m){
            x++;
        }
    }

    printf("%d",x);

    return 0;
}
