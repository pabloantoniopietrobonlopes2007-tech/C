#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio,fim,cont=0;
    scanf("%d %d",&inicio,&fim);
    for(int i=inicio;i<=fim;i++){
        if((i%4==0) && (i%400==0 || i%100!=0)){
            printf("%d\n",i);
            cont++;
        }
    }
    if(cont==0){
        printf("-1");
    }
    return 0;
}
