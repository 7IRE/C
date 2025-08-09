#include <stdio.h>

int main (){
    float radius,height;
    printf("Enter the radius and height for calculating the area of circle and volume of cylinder: \n");
    scanf("%f%f",&radius,&height);
    printf("\nThe Area of circle is %f and volume of cylinder is %f\n",3.14*radius*radius,3.14*radius*radius*height);
    return 0;
}