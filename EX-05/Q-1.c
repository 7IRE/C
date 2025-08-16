#include <stdio.h>


int avg(int a , int b , int c);

int main (){
    int a=3,b=4,c=5,ag;
    ag=avg(a,b,c);
    printf("%d",ag);
    return 0;
}

int avg(int a , int b , int c){
    int av;
    av=(a+b+c)/3.0;
    return av;
}