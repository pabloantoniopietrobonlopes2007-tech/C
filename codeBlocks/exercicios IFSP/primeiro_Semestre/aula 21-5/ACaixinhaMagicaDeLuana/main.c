#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,x,cont=0;
    scanf("%d",&n);
    int pedras[n];
    for(int i=0;i<n;i++){
        scanf("%d",&pedras[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(pedras[i]%x==0){
            cont+=pedras[i];
        }
    }
    printf("%d",cont);
    return 0;
}
