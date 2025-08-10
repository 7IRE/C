#include <stdio.h>

int main (){
    int P,C,M;
    printf("Enter the Marks of Physics , Chemistry & Maths \n");
    scanf("%d%d%d",&P,&C,&M);

    if((P+C+M)/3<40){
        printf("You Fail");
    }
    else if(P<33){
        printf("You Fail");
    }
    else if(C<33){
        printf("You Fail");
    }
    else if(M<33){
        printf("You Fail");
    }
    else{
        printf("You Pass");
    }
    return 0;
}