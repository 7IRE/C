#include <stdio.h>

int main (){
    int i=7;
    printf("The address of i is: %u \n",&i);
    printf("The value at address of i is %d",*(&i));
    return 0;
}