#include <stdio.h>

int main (){
    int mul[10];
    int loop,tbl;
    printf("Enter the table you wanna store:");
    scanf("%d",&tbl);
    for(loop=0;loop<=10;loop++){
        mul[loop]=tbl*loop;
        printf("%d \n",mul[loop]);
    }
    return 0;
}