#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long fib[61];
    int num[1000],maior=0,n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        if(num[i]>maior){
            maior=num[i];
        }
    }

    for(int i=0;i<=maior;i++){
        if(i==0){
            fib[i]=0;
        }
        else if(i==1){
            fib[i]=1;
        }
        else{
            fib[i]=fib[i-1]+fib[i-2];
        }
    }

    for(int i=0;i<n;i++){
        printf("Fib(%d) = %llu\n",num[i],fib[num[i]]);
    }

    return 0;
}
