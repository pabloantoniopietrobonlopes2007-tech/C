#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,bandeiras[1000],verm=0,amar=0,larj=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&bandeiras[i]);
        switch(bandeiras[i]){
        case 1: verm++; break;
        case 2: larj++; break;
        case 3: amar++; break;
        }
    }
    printf("Amarelo = %d\n",amar);
    printf("Laranja = %d\n",larj);
    printf("Vermelho = %d\n",verm);
    for(int i=n-1;i>=0;i--){
        printf("%d ",bandeiras[i]);
    }
    return 0;
}
