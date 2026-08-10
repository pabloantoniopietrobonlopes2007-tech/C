#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testes,alunos[1000],notas[1000],original[1000],certos[1000];
    int maior,cont,aux;


    scanf("%d",&testes);

    for(int i=0;i<testes;i++){
        scanf("%d",&alunos[i]);

        for(int j=0;j<alunos[i];j++){
            scanf("%d",&notas[j]);
            original[j]=notas[j];
        }

        for(int k=0;k<alunos[i]-1;k++){
            maior=k;
            for(int l=k+1;l<alunos[i];l++){
                if(notas[maior]<notas[l]){
                    maior=l;
                }
            }
            if(maior!=k){
                aux=notas[k];
                notas[k]=notas[maior];
                notas[maior]=aux;
            }
        }

        cont=0;
        for(int m=0;m<alunos[i];m++){
            if(notas[m]==original[m]){
                cont++;
            }
        }
        certos[i]=cont;
    }

    for(int i=0;i<testes;i++){
        printf("%d\n",certos[i]);
    }

    return 0;
}
