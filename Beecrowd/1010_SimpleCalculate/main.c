#include <stdio.h>
#include <stdlib.h>

int main(){
    int code1,code2,quant1,quant2;
    double valor1,valor2,contafinal;
    scanf("%d%d%lf%d%d%lf",&code1,&quant1,&valor1,&code2,&quant2,&valor2);
    contafinal= (quant1*valor1)+(quant2*valor2);
    printf("VALOR A PAGAR: R$ %.2lf\n",contafinal);
    return 0;
}
