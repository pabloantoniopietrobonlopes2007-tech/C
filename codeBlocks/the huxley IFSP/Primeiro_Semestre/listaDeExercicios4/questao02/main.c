#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],b[1000],c[1000],n,cont1=0,cont2=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2!=0){
            b[cont1]=a[i];
            cont1++;
        }
        else{
            c[cont2]=a[i];
            cont2++;
        }
    }
    for(int i=0;i<cont1;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    for(int i=0;i<cont2;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
