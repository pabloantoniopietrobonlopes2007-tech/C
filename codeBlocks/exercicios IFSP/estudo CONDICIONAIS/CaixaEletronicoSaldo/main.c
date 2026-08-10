#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e, sair;
    double deposito, saque;
    double saldo = 1000;

    printf("1 = deposito\n2 = saque\n3 = consultar saldo\n4 =  sair\n");

    while(sair<1){

        scanf("%d", &e);

        switch(e){
        case 1:
            printf("deposito: ");
            scanf("%lf", &deposito);
            saldo = saldo + deposito;
            printf("saldo: %.2lf\n", saldo);
            break;

        case 2:
            printf("saque: ");
            scanf("%lf", &saque);

            if(saque<=saldo){
                saldo = saldo - saque;
                printf("%.2lf\n", saldo);
            }
            else{
                printf("saque impossivel\n");
            }
            break;

        case 3:
            printf("%.2lf\n", saldo);
            break;

        case 4:
            sair++;
        }

    }

    return 0;
}
