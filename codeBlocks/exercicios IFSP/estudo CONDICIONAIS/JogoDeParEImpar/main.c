#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int j, c, s;
    scanf("%d", &j);
    srand(time(NULL));
    c = rand() % 10 +1;
    s = c + j;

    if(s%2==0){
        printf("%d + %d:PAR jogador vence",c, j);
    }
    else{
        printf("%d + %d:IMPAR computador vence",c ,j);
    }

    return 0;
}
