#include <stdio.h>
#include <stdlib.h>

int main()
{
    //soma so se for divisivel por 3 e não por 5
    int x;
    int s =0;

    for(x!=0;;){
        scanf("%d",&x);

        if(x==0){
            break;
        }

        else{
            if((x%5!=0)&&(x%3==0)){
                s +=x;
            }
        }

        printf("soma = %d\n", s);
    }


    return 0;
}
