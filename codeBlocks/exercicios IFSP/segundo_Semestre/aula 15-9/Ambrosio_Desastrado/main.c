#include <stdio.h>
#include <stdlib.h>

typedef struct{
int num;
char c;
}codigo;

int main()
{
    int n;
    scanf("%d",&n);

    codigo codificado[n];
    char palavra[n+1];

    for(int i=0;i<n;i++){
        scanf("%d",&codificado[i].num);
        scanf("%c%*c",&codificado[i].c);
        palavra[codificado[i].num-1]=codificado[i].c;
    }
    palavra[n-1]='\0';

    for(int i=0;i<n;i++){
        printf("%s\n",palavra);
    }

    return 0;
}
