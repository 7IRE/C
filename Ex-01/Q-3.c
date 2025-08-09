#include <stdio.h>

void main(){
    float b,a,c;
    /*
    0C=32F
    100C=212F
    */
    printf("\n -----C to F Converter-----\n \n \n");
    printf("Enter The value of temp in C to convert to F:\n");
    scanf("%f",&b);
    a=(1.8*b)+32;
    printf("%f",a);
    printf("Enter The value of temp in F to convert to C:\n");
    scanf("%f",&c);
    a=((c-32)*5)/9;
    printf("%f",a);
}