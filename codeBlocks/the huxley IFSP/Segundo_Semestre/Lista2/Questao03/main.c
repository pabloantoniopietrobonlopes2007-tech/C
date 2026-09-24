#include <stdio.h>
#include <stdlib.h>

typedef struct{
double nota,peso;
}notas;

int main()
{
    int n;
    double media,cima,baixo;
    scanf("%d",&n);

    notas *alunos = (notas *)malloc(sizeof(notas) * n);
    for(int i=0;i<n;i++){
        scanf("%lf",&alunos[i].nota);
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&alunos[i].peso);
    }
    for(int i=0;i<n;i++){
        cima+=alunos[i].nota*alunos[i].peso;
        baixo+=alunos[i].peso;
    }

    media=cima/baixo;

    printf("%.2lf\n",media);


    return 0;
}
