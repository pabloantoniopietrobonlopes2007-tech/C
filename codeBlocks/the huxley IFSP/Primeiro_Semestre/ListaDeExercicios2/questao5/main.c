#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d", &i);

    if(i<16){
        printf("nao eleitor");
    }
    else if((i>=18)&&(i<=65)){
        printf("eleitor obrigatorio");
    }
    else{
        printf("eleitor facultativo");
    }



    return 0;
}
