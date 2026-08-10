#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes,alunos[1000],notas[1000],mudancas[1000];
    int aux,maior,cont=0;

    scanf("%d",&testes);

    for(int i=0;i<testes;i++){
        scanf("%d",&alunos[i]);

        for(int j=0;j<alunos[i];j++){
            scanf("%d",&notas[j]);
            }


        //organiza as filas
        cont=0;
        for(int k=0;k<alunos[i];k++){
            maior=k;
            for(int l=k+1;l<alunos[i];l++){
                if(notas[l]>notas[maior]){
                    maior=l;
                }
            }
            if(maior!=k){
                aux=notas[k];
                notas[k]=notas[maior];
                notas[maior]=aux;
                cont+=2;
            }
        }
        mudancas[i]=cont;
    }

    for(int i=0;i<testes;i++){
        printf("%d\n",(alunos[i]-mudancas[i]));
    }

    return 0;
}
