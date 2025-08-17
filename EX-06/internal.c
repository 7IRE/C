#include <stdio.h>

int main (){
    int i=5;
    int *j;
    j=&i;
    printf("Address of i is %u \n",&i);
    printf("Address of i is %u \n",j);
    printf("Address of j is %u \n",&j);
    printf("Value of i is %d \n",*j);
    printf("Value of i is %d \n",i);
    printf("value of i is %d",*(&i));

    return 0;
}