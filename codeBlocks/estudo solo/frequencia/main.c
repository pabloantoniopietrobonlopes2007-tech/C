#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[1000],n,semRepetir[1000],cont=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&numeros[i]);
    }

    //gpt
    for (int i = 0; i < n; i++) {
        int freq = 0;
        int jaContado = 0;

        // Verifica se já contamos esse número antes
        for (int k = 0; k < i; k++) {
            if (numeros[k] == numeros[i]) {
                jaContado = 1;
                break;
            }
        }
        //se ja foi contado pula para proxima repetição do for
        if (jaContado)
            continue;

        //criar m array sem os repetidos
        semRepetir[cont++]=numeros[i];

        // Conta quantas vezes ele aparece
        for (int j = 0; j < n; j++) {
            if (numeros[j] == numeros[i]) {
                freq++;
            }
        }

        printf("%d aparece %d vez(es)\n", numeros[i], freq);
    }

    for(int i=0;i<cont;i++){
        printf("%d ",semRepetir[i]);
    }


    return 0;
}
