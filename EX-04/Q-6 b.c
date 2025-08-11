//Program to calculate the sum of n natural numbers 
#include <stdio.h>

int main (){
    int a,loop=0,sum=0;
    printf("Enter the value:");
    scanf("%d",&a);
    do{
        sum=sum+loop;
        loop++;
    }while(loop<=a);
    printf("The Total Sum is %d",sum);
    return 0;
}