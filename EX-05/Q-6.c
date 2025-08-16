#include <stdio.h>


int sum(int a);


int main (){
    int m;
    printf("Enter a value:");
    scanf("%d",&m);
    printf("The sum of %d natural numbers is %d",m,sum(m));
    return 0;
}

int sum(int a){
    int calc;
    if(a==1){
        return 1;
    }
    else{
        calc=sum(a-1)+a;
    }
    return calc;
}