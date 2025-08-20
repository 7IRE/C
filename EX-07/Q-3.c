#include <stdio.h>

int main (){
    int mul[10];
    int loop;
    for(loop=0;loop<=10;loop++){
        mul[loop]=5*loop;
        printf("%d \n",mul[loop]);
    }
    return 0;
}