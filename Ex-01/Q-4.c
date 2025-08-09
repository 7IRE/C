#include <stdio.h>

void main(){
    //Simple Interest Calculator

    float SI , P , R , T ;
    printf("Enter the Principal Amount (Initial Amount of Money), Rate of Intrest (In Percentage),Time(In Years) \n \n \n ");
    scanf("%f%f%f",&P,&R,&T);
    SI = (P*R*T)/100;
    printf("Your Simple Interest is :%f",SI);
}