#include <stdio.h>

int main (){
    int a;
    printf("Enter a number to test divisiblity with 97: \n ");
    scanf("%d",&a);
    printf("\n\n----The test returns 0 for perfectly divisible number----\n\n\n");
    printf("The Test Returns:%d \n",a%97);
    return 0;
}