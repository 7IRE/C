#include <stdio.h>

void address(int a);


int main (){
    int i=5;
    printf("The address of i is %u \n",&i);
    address(i);
    return 0;
}

void address(int a){
    printf("The address of passed value is %u",&a);
}