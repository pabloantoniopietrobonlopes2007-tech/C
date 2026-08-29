#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ataque[30],defesa[30],saida[30];

    scanf("%s",ataque);
    scanf("%s",defesa);

    if(strcmp(ataque,"Planta")==0){
        if(strcmp(defesa,"Planta")==0){
            strcpy(saida,"Empate");
        }
        else if(strcmp(defesa,"Fogo")==0){
            strcpy(saida,"Desvantagem");
        }
        else{
            strcpy(saida,"Vantagem");
        }
    }

    else if(strcmp(ataque,"Fogo")==0){
        if(strcmp(defesa,"Fogo")==0){
            strcpy(saida,"Empate");
        }
        else if(strcmp(defesa,"Agua")==0){
            strcpy(saida,"Desvantagem");
        }
        else{
            strcpy(saida,"Vantagem");
        }
    }

        else if(strcmp(ataque,"Agua")==0){
            if(strcmp(defesa,"Agua")==0){
                strcpy(saida,"Empate");
            }
            else if(strcmp(defesa,"Planta")==0){
                strcpy(saida,"Desvantagem");
            }
            else{
                strcpy(saida,"Vantagem");
            }
        }

    printf("%s\n",saida);

    return 0;
}
