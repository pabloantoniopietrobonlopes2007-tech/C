#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char passeio[8];
    int x,cont_C=0,cont_B=0,y;
    for(x=0;x<7;x++){
        scanf("%s%*c",passeio);
        for(y=0;y<strlen(passeio);y++){
            if(passeio[y]>='A'&& passeio[y]<='Z'){
                passeio[y]+=32;
            }
        }
        if(strcmp(passeio,"cinema")==0){
            cont_C++;
        }
        else{
            cont_B++;
        }
    }

    if(cont_B<cont_C){
        printf("CINEMA\n");
    }
    else{
        printf("BOLICHE\n");
    }

    return 0;
}
