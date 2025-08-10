#include <stdio.h>

void leapyear(int a);


int main (){
    int year1,year2,loop;
    printf("Enter the range of values to Hunt the Leap Years.");
    scanf("%d%d",&year1,&year2);
    loop=year1;
    printf("\n \n ----LEAP YEARS---- \n \n ");
    while(loop>=year1 && loop<=year2){
        leapyear(loop);
        loop++;
    }
    return 0;
}

void leapyear (int a){
    int b=a%4;
    if(b==0){
        if(a%100==0){
            if(a%400==0){
                printf("%d \t",a);
            }
        }
        else{
            printf("%d \t",a);
        }
    }
    
}