#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    char sabor[100];
    int bolas=0;
    double preco=0;

    scanf("%99s",*sabor);
    scanf("%d",&bolas);

    for(int i=0;i!="\0";i++){
        sabor[i]=tolower(sabor[i]);
    }
    if(sabor=="morango"){
        printf("0");
    }

    /*switch (sabor) {
    case "morango": preco+=4.5; break;
    case "cereja": preco+=4.5; break;
    case "damasco": preco+=3.8; break;
    case "siriguela": preco+=3.8; break;
    default: preco+=2.5;
    }*/

    if(bolas>2){
        printf("%.2lf\nCOM CALDA",preco);
    }
    else{
        printf("%.2lf\nSEM CALDA",preco);
    }

    return 0;
}
