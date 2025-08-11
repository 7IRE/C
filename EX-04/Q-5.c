//Program to calculate the sum of n natural numbers 
#include <stdio.h>

int main (){
    int a,loop,sum=0;
    printf("Enter the value:");
    scanf("%d",&a);
    while(loop<=a){
        sum+=loop;
        loop++;
    }
    printf("The Total Sum is %d",sum);
    return 0;
}