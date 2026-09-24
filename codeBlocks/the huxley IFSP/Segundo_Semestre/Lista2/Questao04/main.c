#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nome[51];
double preco;
int qtd;
}produtos;

int main()
{
    int n,m;
    char aux[51];
    double total=0; // ERRADO: era float mas somava double; trocado para double

    scanf("%d",&n);

    produtos *mercado = (produtos *)malloc(sizeof(produtos) * n);

    for(int i=0;i<n;i++){
        scanf("%s %lf %d",mercado[i].nome,&mercado[i].preco,&mercado[i].qtd);
        getchar();
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%s",aux);
        getchar();

        for(int j=0;j<n;j++){
            if(strcmp(aux,mercado[j].nome)==0 && mercado[j].qtd>0){
                total += mercado[j].preco;
                mercado[j].qtd--;
            }
        }
    }

    printf("%.2lf\n",total);

    free(mercado);

    return 0;
}
