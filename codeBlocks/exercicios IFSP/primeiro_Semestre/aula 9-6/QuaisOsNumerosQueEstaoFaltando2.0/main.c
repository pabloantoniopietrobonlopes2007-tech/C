#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1[100],v2[100],v3[100];
    char c;
    int nA=0,nB=0,x,y,nC,achou,max,aux;
    do{
        scanf("%d%c",&v1[nA++],&c);
    }while(c==' ');

    while(scanf("%d%c",&v2[nB++],&c)>0);

    nC=0;
    for(x=0;x<nA;x++){
        achou=0;
        for(y=0;y<nB;y++){
            if(v1[x]==v2[y]){
                achou=1;
            }
        }
        if(achou=0){
            v3[nC++]=v1[x];
        }
    }

    for(x=0;x<nC-1;x++){
        max=x;
        for(y=x+1;y<nC;y++){
            if(v3[y]>v3[max]){
                max=y;
            }
        }
        if(max!=x){
            aux=v3[max];
            v3[max]=v3[x];
            v3[x]=aux;
        }
    }

    //nao tem print

    return 0;
}
