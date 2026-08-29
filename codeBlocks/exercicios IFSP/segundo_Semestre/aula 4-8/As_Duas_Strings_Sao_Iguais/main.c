#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[51],str2[51];
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]",str2);

    if(strcmp(str1,str2)==0){
        printf("IGUAIS\n");
    }
    else{
        printf("DIFERENTES\n");
    }
    return 0;
}
