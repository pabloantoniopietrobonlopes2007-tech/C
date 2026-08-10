#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3,m1,m2,m3,mT;
    scanf("%d %d %d", &a1, &a2, &a3);

    m1=2*(a2+(a3*2));
    m2=2*(a1+a3);
    m3=2*(a2+(a1*2));

    mT=m1;
    if(m2<mT){
        mT=m2;
    }
    if(m3<mT){
        mT=m3;
    }

    printf("%d",mT);

    return 0;
}
