#include <stdio.h>

int main (){
    int sal;
    printf("Enter Your Salary: \n");
    scanf("%d",&sal);
    if (sal<=250000){
        printf("Your Income tax is 0");
    }
    else if(sal>250000 && sal<=500000){
        printf("Your Income tax is %f",sal*0.05);
    }
    else if(sal>500000 && sal<=1000000){
        printf("Your Income tax is %f",sal*0.20);
    }
    else if(sal>1000000){
        printf("Your Income tax is %f",sal*0.30);
    }
    return 0;
}

