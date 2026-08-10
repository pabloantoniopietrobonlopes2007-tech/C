#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],b[1000],cont=0;
    do{
        scanf("%d",&a[cont]);
        if(a[cont]!=-1){
            b[cont]=a[cont]*a[cont];
            cont++;
        }
    }while(a[cont]!=-1);
    for(int i=0;i<cont;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
