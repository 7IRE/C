#include <stdio.h>

void sumavg (int *a , int *b , int *sum , int *avg);

int main (){
    int a,b,sum,avg;
    scanf("%d%d",&a,&b);
    sumavg(&a,&b,&sum,&avg);
    
    printf("The sum is %d and avg is %d",sum,avg);
    return 0;
}

void sumavg(int *a , int *b , int *sum , int *avg){
    *sum=*a+*b;
    *avg=*sum/2;
}