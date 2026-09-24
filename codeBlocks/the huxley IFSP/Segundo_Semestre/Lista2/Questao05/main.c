#include <stdio.h>
#include <stdlib.h>

typedef struct{
int idade;
char sexo;
int ingresso;
}cadastro;

int main()
{
    int n,total=0,fila;
    int homens=0,mulheres=0;
    double media_idade=0;

    int total_fila[3] = {0};

    scanf("%d",&n);

    cadastro *pessoas = (cadastro *)malloc(sizeof(cadastro) * n * 3);

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d %c %d",&pessoas[n*i+j].idade,&pessoas[n*i+j].sexo,&pessoas[n*i+j].ingresso);

            media_idade+=pessoas[n*i+j].idade;



            if(pessoas[n*i+j].ingresso==0){
                total+=40;
                total_fila[j]+=40;
            }
            else if(pessoas[n*i+j].ingresso==1){
                total+=20;
                total_fila[j]+=20;
            }

            if(pessoas[n*i+j].sexo=='M'){
                homens++;
            }
            else if(pessoas[n*i+j].sexo=='F'){
                mulheres++;
            }

        }
    }

    media_idade/=n*3;
    scanf("%d",&fila);

    printf("Receita total: %d\n",total);
    printf("Receita fila %d: %d\n",fila, total_fila[fila]);
    printf("Homens: %d\n",homens);
    printf("Mulheres: %d\n",mulheres);
    printf("Media das idades: %.0lf\n",media_idade);

    return 0;
}
