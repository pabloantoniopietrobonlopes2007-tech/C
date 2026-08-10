#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int x,digito,invertido=0;
    scanf("%d",&x);

    while(x>0){ //executa ate o ultimo digito

        digito=x%10;//da o ultimo digito
        invertido=invertido*10+digito; //coloca os digitos na ordem invertida
        x=(x/10);//da o numero sem o ultimo digito
    }

    printf("%d",invertido);


    return 0;
}
