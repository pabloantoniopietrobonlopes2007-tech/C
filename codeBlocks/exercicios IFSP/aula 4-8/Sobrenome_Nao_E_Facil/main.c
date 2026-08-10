#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sobrenome[43];
    int cont=0,facil=0,dif=0;

    scanf("%[^\n]",sobrenome);

    while(sobrenome[cont]!='\0'){
        cont++;
    }

    sobrenome[0]=sobrenome[0]+32;

    for(int i=0;i<cont;i++){
        switch(sobrenome[i]){
            case 'a':case 'e':
            case 'i':case 'o':
            case 'u':facil=0;break;
            default:facil++;
        }
        if(facil>=3){
            dif=1;
        }


        /*if(sobrenome[i]=='e'){
           facil=0;
        }
        else if(sobrenome[i]=='e'){
            facil=0;
        }
        else if(sobrenome[i]=='i'){
            facil=0;
        }
        else if(sobrenome[i]=='o'){
            facil=0;
        }
        else if(sobrenome[i]=='u'){
            facil=0;
        }
        else{
            facil++;
        }
        if(facil==3){
            dif=1;
        }*/
    }

    sobrenome[0]=sobrenome[0]-32;


    if(dif==0){
        printf("%s eh facil\n",sobrenome);
    }
    else{
        printf("%s nao eh facil\n",sobrenome);
    }

    return 0;
}
