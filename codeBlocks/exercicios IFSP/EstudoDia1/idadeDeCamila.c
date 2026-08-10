#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2, n3, camila;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1>n2 && n1<n3 || n1<n2 && n1 > n3){
        camila = n1;
        printf("%d", camila);
        }

        else{
            if (n2>n1 && n2<n3 || n2<n1 && n2>n3){
                camila = n2;
                printf("%d", camila);
            }

            else{
                if (n3>n2 && n3<n1 || n3<n2 && n3>n1){
                    camila = n3;
                    printf("%d", camila);
            }
        }
    }
    return 0;
}
