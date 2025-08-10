#include <stdio.h>

int main (){
    char test;
    printf("Enter the value to be tested for Capital and Small letters.");
    scanf("%c",&test);

    if(test>=97 && test<=122){
        printf("Small Letter");
    }
    else {
        printf("Capital Letter");
    }
    return 0;
}