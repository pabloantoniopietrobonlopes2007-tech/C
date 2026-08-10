#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[10];
    int idade;
    char cidade[10];
};

int main()
{
    struct cadastro pessoa1;
    strcpy(pessoa1.nome,"Pablo");

    pessoa1.idade = 18;

    strcpy(pessoa1.cidade,"Indaiatuba");

    printf("%s\n%d\n%s\n",pessoa1.nome,pessoa1.idade,pessoa1.cidade);

    struct cadastro pessoa2;
    fgets(pessoa2.nome,10,stdin);
    scanf("%d",&pessoa2.idade);
    getchar();
    fgets(pessoa2.cidade,10,stdin);
    printf("%s\n%d\n%s\n",pessoa2.nome,pessoa2.idade,pessoa2.cidade);


    return 0;
}
