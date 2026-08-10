#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[3][3],m2[3][3],r[3][3]={0};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }

    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            r[a][b]=0;

            for(int c=0;c<3;c++){
                r[a][b]+=m1[a][c]*m2[c][b];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d", r[i][j]);

            if (j < 2)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
