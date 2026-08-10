#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma=0,a1=0,a2=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i==1){
            printf("0\n");
        }
        else if(i==2){
            printf("1\n");
        }
        else{
            soma=a1+a2;
            printf("%d\n",soma);
            a1=a2;
            a2=soma;
        }
    }

    return 0;
}
