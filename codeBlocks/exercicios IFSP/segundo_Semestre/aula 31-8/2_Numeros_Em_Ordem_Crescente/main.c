#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int*)malloc(2*sizeof(int));
    scanf("%d %d", &p[0], &p[1]);
    if(p[0] > p[1]){
        printf("%d %d", p[1], p[0]);

    }
    else{
         printf("%d %d", p[0], p[1]);
    }

    return 0;
}
