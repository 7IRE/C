#include <stdio.h>


float farh(int celc);

int main (){
    float temp=farh(100);
    printf("The temperature is %f",temp);
    return 0;
}

float farh(int celc){
    float farhenheit=(celc*9/5.0)+32;
    return farhenheit;
}