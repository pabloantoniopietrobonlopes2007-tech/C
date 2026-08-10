#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double total[3]={0},acertos[3]={0};
    double aux,saque,bloqueio,ataque;

    scanf("%d",&n);
    char jogador[1000];
    for(int i=0;i<n;i++){
        scanf("%s",&*jogador);
        for(int i=0;i<3;i++){
            scanf("%lf",&aux);
            total[i]+=aux;
        }
        for(int i=0;i<3;i++){
            scanf("%lf",&aux);
            acertos[i]+=aux;
        }
    }

    saque=(acertos[0]/total[0])*100;
    bloqueio=(acertos[1]/total[1])*100;
    ataque=(acertos[2]/total[2])*100;

    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",saque,bloqueio,ataque);

    return 0;
}
