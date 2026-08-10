#include <stdio.h>
#include <stdlib.h>

void mensagem(){
    printf("Hello World\n");
}
int quadrado(int a){
    return (a*a);
}
int soma(int a, int b){
    return (a+b);
}

int maior(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void printArray(int a[], int t){
    int i;
    for(i = 0; i<t; i++){
        printf("%d ", a[i]);
    }
}


int main()
{
    int numeros[5] = {1,2,4,5,8};
    /*mensagem();
    scanf("%d",&x);
    y = quadrado(x);
    printf("%d\n",y);
    printf("%d\n",soma(x,y));*/
    printArray(numeros,5);

    return 0;
}
