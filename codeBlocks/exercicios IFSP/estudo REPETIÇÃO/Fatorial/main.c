#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,f=1;
    scanf("%d",&x);

    if(x<0){
        printf("invalido");
    }
    else{
        for(int i = x;i>=1;i--){
            f = f*i;
            }

        printf("%d",f);
    }
    return 0;
}
