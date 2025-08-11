#include <stdio.h>

int prime(int a);

int main (){
    int a,temp;
    printf("Enter the value to check for prime number:");
    scanf("%d",&a);
    temp=prime(a);
    if(temp==0){
        printf("Composite Number");
    }
    else if(temp==1){
        printf("Prime Number");
    }
    return 0;
}

int prime(int a){
    if(a==2){
        return 1;
    }
    else if(a%2==0){
        return 0;
    }
    //1->prime number , 0->composite number
    int loop=3;
    while(loop<a){
        if(a%loop==0){
            return 0;
        }
    loop=loop+2;
    }
    return 1;
}