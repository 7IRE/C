#include <stdio.h>

int main (){
    int a=10,*ptr,**pointer;
    ptr=&a;
    pointer=&ptr;
    printf("%d",**pointer);
    return 0;
}