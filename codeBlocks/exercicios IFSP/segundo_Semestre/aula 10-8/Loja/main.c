#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int l,c,r,vendas,aux;
    char ultL[11],ultC[11],ultR[11],comprador[11];
    scanf("%d %d %d %d",&l,&c,&r,&vendas);
    for(int i=0;i<vendas;i++){
        scanf("%s %d",comprador,&aux);

        if(aux==1 && l>0){
            l--;
            strcpy(ultL,comprador);
        }

        else if(aux==2 && c>0){
            c--;
            strcpy(ultC,comprador);
        }

        else if(aux==3 && r>0){
            r--;
            strcpy(ultR,comprador);
        }

    }

    printf("livro %d, %s\n",l,ultL);
    printf("celular %d, %s\n",c,ultC);
    printf("roupa %d, %s\n",r,ultR);

    return 0;
}
