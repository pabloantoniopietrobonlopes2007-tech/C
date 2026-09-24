#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int idade;
char nome[51];
}cadastro;

int main()
{
    int n,cont1=0,cont2=0;
    scanf("%d",&n);

    cadastro *alunos = (cadastro *)malloc(sizeof(cadastro) * n);
    cadastro *menor14 = (cadastro *)malloc(sizeof(cadastro) * n);
    cadastro *maior14 = (cadastro *)malloc(sizeof(cadastro) * n);



    for(int i=0;i<n;i++){
        scanf("%50s", alunos[i].nome);
        scanf("%d", &alunos[i].idade);
        getchar();
        if(alunos[i].idade>14){
            strcpy(maior14[cont1].nome,alunos[i].nome);
            maior14[cont1].idade=alunos[i].idade;
            cont1++;
        }
        else{
            strcpy(menor14[cont2].nome,alunos[i].nome);
            menor14[cont2].idade=alunos[i].idade;
            cont2++;
        }
    }

    for(int i=0;i<cont2;i++){
        printf("%s\n%d\n",menor14[i].nome,menor14[i].idade);
    }
    for(int i=0;i<cont1;i++){
        printf("%s\n%d\n",maior14[i].nome,maior14[i].idade);
    }

    free(alunos);
    free(menor14);
    free(maior14);

    return 0;
}
