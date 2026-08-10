#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,a[1000],b[1000],c[2000];
    int contA=0,contB=0;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<(n1+n2);i++){
        if(contA<n1&&contB<n2){
            if(i%2==0){
                c[i]=a[contA++];
            }
            else{
                c[i]=b[contB++];
            }
        }
        else{
            if(contA<n1){
                c[i]=a[contA++];
            }
            else{
                c[i]=b[contB++];
            }
        }
    }
    for(int i=0;i<(n1+n2);i++){
        printf("%d ",c[i]);
    }
    return 0;
}
