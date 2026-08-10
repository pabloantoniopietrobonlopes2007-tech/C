#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ataque[30],atacado[30];

    scanf("%[^\n]",ataque);
    scanf("%[^\n]",atacado);

    if(ataque=='planta'){
        switch(atacado){
        case 'planta': printf("empate\n");break;
        case 'fogo': printf("desvantagem\n");break;
        case 'agua': printf("vantagem\n");break;
        }
    }
    else if(ataque=='fogo'){
        switch(atacado){
        case 'planta': printf("vantagem\n");break;
        case 'fogo': printf("empate\n");break;
        case 'agua': printf("desvantagem\n");break;
        }
    }
    else if(ataque=='agua'){
        switch(atacado){
        case 'planta': printf("desvantagem\n");break;
        case 'fogo': printf("vantagem\n");break;
        case 'agua': printf("empate\n");break;
        }
    }





    return 0;
}
