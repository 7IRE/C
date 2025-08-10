#include <stdio.h>

int leapyear(int a);


int main (){
    int year,test;
    printf("Enter the Year you want to check for leap Year: \n");
    scanf("%d",&year);
    test=leapyear(year);
    if(test==1){
        printf("The Year is not a Leap Year");
    }
    else{
        printf("The Year is a Leap Year");
    }
    return 0;
}

int leapyear (int a){
    int b=a%4;
    if(b==0){
        if(a%100==0){
            if(a%400==0){
                return 0;
            }
            else{
                return 1;
            }
        }
        else{
            return 0;
        }
    }
    else{
        return 1;
    }
}