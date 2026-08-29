#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],b[1000],c[1000],cont=0,n1,n2;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n1;j++){
            if((i!=j)&&(a[i]==a[j])){
                a[j]=-100000;
            }
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n2;j++){
            if((i!=j)&&(b[i]==b[j])){
                b[j]=-100000;
            }
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if((a[i]==b[j])&&(a[i]!=-100000)){
                c[cont++]=a[i];
            }
        }
    }
    printf("%d ",cont);
    if(cont>0){
        for(int i=0;i<cont;i++){
            printf("%d ",c[i]);
        }
    }
    return 0;
}
