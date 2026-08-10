#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=1,vivo,gen,comp1=0;
    int jogo[45][45]={0},jogo1[45][45]={0};
    int a,b;

    //settings
    scanf("%d %d %d %d",&x,&y,&vivo,&gen);


    //vivos
    for(int i=0;i<vivo;i++){
        scanf("%d %d",&a,&b);
        jogo[a][b]=1;
    }


    for(int p=0;p<x;p++){
        for(int q=0;q<y;q++){
            printf("%d ",jogo[p][q]);
        }
        printf("\n");
    }
    printf("\n");



    //mudanças
    for(int i=0;i<gen;i++){

        for(int j=0;j<x;j++){
            for(int k=0;k<y;k++){


                if(jogo[j-1][k]==1){
                    comp1++;
                }

                if(jogo[j+1][k]==1){
                    comp1++;
                }

                if(jogo[j][k-1]==1){
                    comp1++;
                }

                if(jogo[j][k+1]==1){
                    comp1++;
                }

                if(jogo[j-1][k-1]==1){
                    comp1++;
                }

                if(jogo[j+1][k-1]==1){
                    comp1++;
                }

                if(jogo[j-1][k+1]==1){
                    comp1++;
                }

                if(jogo[j+1][k+1]==1){
                    comp1++;
                }

                //mudanças
                if(jogo[j][k]==1){
                    if(comp1<2){
                        jogo1[j][k]=0;
                    }
                    else if(comp1>3){
                        jogo1[j][k]=0;
                    }
                }
                else{
                    if(comp1==3){
                        jogo1[j][k]=1;
                    }
                }
            }
            comp1=0;
        }

        //remodela os jogos
        for(int j=0;j<x;j++){
            for(int k=0;k<y;k++){
                jogo[j][k]=jogo1[j][k];
                jogo1[j][k]=0;
            }
        }



        //mostra
        for(int p=0;p<x;p++){
            for(int q=0;q<y;q++){
                printf("%d ",jogo[p][q]);
            }
            printf("\n");
        }
        printf("\n");


    }


    return 0;
}
