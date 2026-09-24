#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int menor,maior;
    p = (int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        scanf("%d", &p[i]);
        if(i==0){
            menor=p[i],maior=p[i];
        }
        else{
            if(maior<p[i]){
                maior=p[i];
            }
            if(menor>p[i]){
                menor=p[i];
            }
        }
    }
    printf("%d\n%d\n",menor,maior);
    return 0;
}
