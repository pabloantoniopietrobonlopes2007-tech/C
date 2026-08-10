#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,H,M,S;
    scanf("%d",&N);
    S=N%60;
    M=(N/60)%60;
    H=N/3600;
    printf("%d:%d:%d",H,M,S);
    return 0;
}
