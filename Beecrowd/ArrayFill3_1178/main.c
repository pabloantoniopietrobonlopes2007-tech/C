#include <stdio.h>
#include <math.h>

int main() {
    double N[100];

    scanf("%lf",&N[0]);

    for(int i=1;i<100;i++){
        N[i]=N[0]*pow(0.5,i);
    }

    for(int i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,N[i]);
    }

    return 0;
}
