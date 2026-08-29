#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int jogadores,ganhador,menor;

  char nomes[100][101],aux[101];

  scanf("%d %d",&jogadores,&ganhador);

  for(int i=0;i<jogadores;i++){
    scanf(" %s",nomes[i]);
  }

  for(int i=0;i<jogadores;i++){
    menor=i;
    for(int j=i+1;j<jogadores;j++){
        if(nomes[j][0]<nomes[menor][0]){
            strcpy(aux,nomes[menor]);
            strcpy(nomes[menor],nomes[j]);
            strcpy(nomes[j],aux);
        }
    }
  }

  printf("%s\n",nomes[ganhador-1]);


    return 0;
}
