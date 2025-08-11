#include <stdio.h>

int main (){
    printf("Enter the value to calculate factorial:");
    int fac,i=1,mul=1;
    scanf("%d",&fac);
    while(i<=fac){
        mul*=i;
        i++;
    }
    printf("The value of factorial is %d",mul);
    return 0;
}