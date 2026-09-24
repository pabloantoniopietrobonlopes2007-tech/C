#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id,idade;
double salario;
}cadastro;

int main()
{
    int n,maior_salario=0,menor_idade=0;
    scanf("%d",&n);
    cadastro *funcionarios = (cadastro *)malloc(sizeof(cadastro) * n);

    for(int i=0;i<n;i++){
        scanf("%d %d %lf",&funcionarios[i].id,&funcionarios[i].idade,&funcionarios[i].salario);
        if(funcionarios[i].salario>funcionarios[maior_salario].salario){
            maior_salario=i;
        }
        if(funcionarios[i].idade<funcionarios[menor_idade].idade){
            menor_idade=i;
        }
    }

    printf("Maior salario registrado:\nID: %d\nIdade: %d\nSalario: %.2lf\n",funcionarios[maior_salario].id,funcionarios[maior_salario].idade,funcionarios[maior_salario].salario);
    printf("\nMenor idade registrado:\nID: %d\nIdade: %d\nSalario: %.2lf\n",funcionarios[menor_idade].id,funcionarios[menor_idade].idade,funcionarios[menor_idade].salario);

    free(funcionarios);

    return 0;
}
