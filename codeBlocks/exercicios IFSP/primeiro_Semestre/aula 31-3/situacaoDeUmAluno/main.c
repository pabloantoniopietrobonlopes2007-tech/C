#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3;
    double m;
    scanf("%d %d %d", &n1, &n2, &n3);
    m = (n1 + n2 + n3) / 3.00;
    if((m < 0) || (m > 100)){
        printf("Media invalida\n");
    }
    else{
            printf("A media do aluno foi %.2lf e ele foi ", m);
        if(m>=70){
            printf("APROVADO\n");
        }
        else{
            if(m>40){
                printf("FINAL\n");
            }
            else{
                printf("REPROVADO\n");
            }
        }
    }
    return 0;
}
