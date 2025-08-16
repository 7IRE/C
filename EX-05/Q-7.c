#include <stdio.h>


void pattern(int a);

int main (){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    pattern(a);
    return 0;
}

void pattern(int a){
    int loop=0,loop2;
    for(loop=0;loop<a;loop++){
        int loop3=2*loop-1;
        for(loop2=0;loop2<loop3;loop2++){
            printf("*");
        }
        printf("\n");
    }
}