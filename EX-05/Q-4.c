#include <stdio.h>


int fibonacci(int n);


int main (){
    int m,fibo;
    printf("Enter the value you want to calculate for fibonacci series:");
    scanf("%d",&m);
    fibo=fibonacci(m+1);
    printf("\n %d \n",fibo);
    return 0;
}

int fibonacci(int n){
    int calculate;
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        calculate=fibonacci(n-1)+fibonacci(n-2);
    }
    return calculate;
}