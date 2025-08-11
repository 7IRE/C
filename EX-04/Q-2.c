#include <stdio.h>

void reverse(int a);

int main (){
    printf("Enter the value to print multiplication table in reverse order : \n ");
    int a;
    scanf("%d",&a);
    reverse(a);
    return 0;
}

void reverse(int a){
    int loop;
    for(loop=10;loop>0;loop--){
        printf("%d * %d = %d \n ",a,loop,a*loop);
    }
}