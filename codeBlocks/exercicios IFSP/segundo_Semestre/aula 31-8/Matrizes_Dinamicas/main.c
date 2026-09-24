#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int *m1;
    m1=(int*)malloc(m*n*size(int));
    for(int i=0;i<n*m;i++){
        scanf("%d",&m1[i]);
    }

    int **m2,**mr,*p,*q;
    for(int i=0;i<m;i++){
        p=(int*)malloc(n*sizeof(int));
        for(int j=0;j<n;j++){

        }
    }





    return 0;
}
