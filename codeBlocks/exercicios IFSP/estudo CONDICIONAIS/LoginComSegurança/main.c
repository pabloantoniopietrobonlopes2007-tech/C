#include <stdio.h>
#include <stdlib.h>

int main()
{
    int usuario, senha, tentativas = 0;

    while(tentativas<3){

        printf("usuario: ");
        scanf("%d", &usuario);
        if(usuario==1234){
            printf("senha: ");
            scanf("%d", &senha);

            if(senha==9999){
                break;
            }
            else{
                printf("senha invalida\n");
                tentativas++;
            }
        }
        else{
            printf("usuario invalido\n");
            tentativas++;
        }

    }

    if((usuario == 1234) && (senha == 9999)){
            printf("acesso permitido");
        }
        else{
            printf("suas tentativas acabaram");
        }

    return 0;
}
