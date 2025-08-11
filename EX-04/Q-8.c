#include <stdio.h>

int main (){
    printf("Enter the value to calculate factorial:");
    int fac,i,mul=1;
    scanf("%d",&fac);
    for(i=1;i<=fac;i++){
        mul*=i;
    }
    printf("The value of factorial is %d",mul);
    return 0;
}