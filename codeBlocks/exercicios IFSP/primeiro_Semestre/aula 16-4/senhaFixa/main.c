#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    do{
        scanf("%d", &s);
        if(s==2002){
            printf("Acesso permitido\n");
        }
        else{
            printf("Senha invalida\n");
        }
    }while(s!=2002);
    return 0;
}
