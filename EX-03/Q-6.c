#include <stdio.h>


void compare(int a, int b, int c, int d);

int main (){
    printf("Write 4 values to get the Highest value: \n");
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    compare(a,b,c,d);
    return 0;
}

void compare(int a, int b, int c, int d){
    int A;
    A=(a>b)?a:b;
    A=(A>c)?A:c;
    A=(A>d)?A:d;
    printf(" \n \n The Highest of them is %d.",A);
}