#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paginas[7];
    int maior=0,total,lidas;

    scanf("%d", &total);
    lidas=total;

    for(int i=0;i<7;i++){
        scanf("%d",&paginas[i]);

        if(maior<(paginas[i]-paginas[i-1])){
            maior=paginas[i]-paginas[i-1];//diferença entre as duas ultimas paginas q parou
        }
    }

    lidas=paginas[6];

    printf("%d\n%d",lidas, maior);


    return 0;
}
