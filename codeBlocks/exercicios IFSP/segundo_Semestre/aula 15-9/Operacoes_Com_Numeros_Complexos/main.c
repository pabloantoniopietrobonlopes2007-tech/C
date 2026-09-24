#include <stdio.h>
#include <stdlib.h>

typedef struct{
int a,b;
}complexo;

int main()
{
    complexo z1,z2,s,p;

    scanf("%d %d %d %d",&z1.a,&z1.b,&z2.a,&z2.b);

    s.a=z1.a+z2.a;
    s.b=z1.b+z1.b;

    p.a=(z1.a*z2.a)-(z1.b*z2.b);
    p.b=(z1.a*z2.b)+(z2.a*z1.b);

    printf("Soma: %d+%di\n",s.a,s.b);
    printf("Multi: %d+%di\n",p.a,p.b);

    return 0;
}
