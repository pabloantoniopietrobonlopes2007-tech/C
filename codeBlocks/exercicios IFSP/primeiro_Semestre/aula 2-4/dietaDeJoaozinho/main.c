#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pratos[5];
    int m,x;

    for(int i = 0; i < 5; i ++){
        scanf("%d", &pratos[i]);

        if(i == 0){
            m = pratos[i];
            x = 1;
        }
        else if(pratos[i]<m){
            m = pratos[i];
            x = (i+1);
        }
    }


    printf("Joaozinho escolheu a opao %d, com %d calorias", x, m);

    return 0;
}
