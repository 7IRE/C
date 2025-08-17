#include <stdio.h>

void mul(int *a);

int main (){
    int val;
    printf("Enter the value to make it 10 times\n ");
    scanf("%d",&val);
    mul(&val);
    printf("%d",val);
    return 0;
}

void mul( int *a){
    *a=*a*10;
}