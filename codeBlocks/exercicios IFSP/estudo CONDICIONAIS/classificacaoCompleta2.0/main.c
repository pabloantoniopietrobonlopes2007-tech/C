#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if((a==b)&&(b==c)){
        printf("igualdade");
        }
        else{
            if((a>=b)&&(b>=c)){
                printf("decrescente");
                }
                else if((a<=b)&&(b<=c)){
                    printf("crescente");
                    }
                    else{
                        printf("aleatorio");
                        }
                        if((a==b)&&(b==c)){
                            printf("igualdade");
                    }
            }

    return 0;
}
