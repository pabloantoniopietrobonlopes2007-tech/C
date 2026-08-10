#include <stdio.h>
#include <stdlib.h>

int main(){

    int d, m, a;
    int b = 0;
    scanf("%d %d %d", &d, &m, &a);

    if((d>31) || (d<1) || (m>12) || (m<1) || (a>2026) || (a<1)){
        printf("data invalida");
    }
    //datas sempre invalidas

    else{
        if((a%400 == 0) || ((a%100 != 0) && (a%4 == 0))){
            b++;
        }
        //ver se ano é bixesto

        if(((m == 2) && (d <= 29) && (b == 1)) || ((m == 2) && (d <= 28) && (b == 0))){
            printf("data valida");
        }
        else{
            printf("data invalida");
        }
        //

        if((m == 11) || (m == 9) || (m == 6) || (m == 4)){
            if(d<=30){
                printf("data valida");
            }
            else{
                    printf("data invalida");
            }
        }
        //meses com 30 dias

        if((m==1) || (m == 3) || (m==5) || (m == 7) || (m==8) || (m == 10) || (m == 12)){
            if(d<=31){
            printf("data valida");
            }
            else{
            printf("data invalida");
            }
            }
            // meses com 31 dias

        }//fecha chave de datas sempre invalidas

    return 0;
}
