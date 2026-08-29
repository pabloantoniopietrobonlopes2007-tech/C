#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hi,mi,hf,mf, dh,dm;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    if(hf>hi){
        dh = hf-hi;
    }
    else if(hi>=hf){
        dh = 24-(hi-hf);
    }

    if(mf>mi){
        dm = mf-mi;
    }
    else if(hi>=hf){
        dm = mi-mf;
    }

    printf("O JOGO DUROU %d HORA(s) E %d MINUTO(s)", dh, dm);

    return 0;
}
