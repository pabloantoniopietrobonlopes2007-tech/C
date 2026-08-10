#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char gmail[50];
    char senha[20];
};

struct perfil{
    char nome[20];
    int idade;
    char endereco[50];

};

int main()
{
    char gmail[50],senha[20];


    printf("Faca seu cadastro:\n");

    struct cadastro pessoa;
    printf("Gmail: ");
    fgets(pessoa.gmail,50,stdin);
    printf("Senha: ");

    fgets(pessoa.senha,20,stdin);

    printf("\n%s%s\n",pessoa.gmail,pessoa.senha);

    for(int i = 0;i<3;i++){
        printf("Entre na sua conta:\n");
        printf("Gmail: ");
        fgets(gmail,50,stdin);
        printf("Senha: ");
        fgets(senha,20,stdin);

        int compGmail = strcmp(gmail,pessoa.gmail);
        int compSenha = strcmp(senha,pessoa.senha);

        if(compGmail==0 && compSenha==0){
            printf("Voce conseguiu entrar na sua conta\n");
            break;
        }
        else{
            printf("Senha e/ou Gmail invalido(s)\n");
        }
        if(i==2){
            printf("Conta bloqueada");
        }
    }

    return 0;
}
