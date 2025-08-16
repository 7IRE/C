#include <stdio.h>


float force(int mass);


int main (){
    int weight=10;
    float gravity=force(weight);
    printf("The force on the object is %f",gravity);
    return 0;
}


float force(int mass){
    float Force=mass*9.8;
    return Force;
}