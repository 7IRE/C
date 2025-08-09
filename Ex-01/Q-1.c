#include <stdio.h>

int main(){
    //Printing the area of rectangle using hard coded inputs 
    //int a = 5,b = 4;
    //printf("THE AREA OF RECTANGLE IS %d \n",a*b);

    //Printing the area of rectangle using user inputs
    int a,b;
    printf("Enter the lenght and bredth of the rectangle: \n");
    scanf("%d%d",&a,&b);
    printf("The area of rectangle is %d",a*b);

    return 0;
}