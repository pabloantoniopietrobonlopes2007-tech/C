#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idades[3];
    int menor,aux;

    for(int i = 0;i < 3;i++){
        scanf("%d",&idades[i]);
    }

    for(int i = 0;i < 3;i++){
        menor=i;
        for(int j =i+1;j<3;j++){
            if((idades[j]<idades[menor])){
                menor=j;
            }
        }
        aux=idades[i];
        idades[i]=idades[menor];
        idades[menor]=idades[i];
    }

    printf("%d",idades[1]);

    return 0;
}
