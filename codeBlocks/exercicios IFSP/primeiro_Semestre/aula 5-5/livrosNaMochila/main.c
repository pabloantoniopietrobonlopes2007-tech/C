#include <stdio.h>
#include <stdlib.h>

int main()
{
    int livro,kilos=0,cont=0;

    while(kilos<=18){
        scanf("%d",&livro);
        kilos+=livro;

        if(kilos>18){
            printf("%d\n",cont);
        }
        else{
            cont++;
        }
    }

    return 0;
}
