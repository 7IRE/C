#include <stdio.h>

int main (){
    int marks[]={1,2,34,1,5,4,-44,1,23,34,4};
    int pos;
    for(int i=0;i<11;i++){
        if(marks[i]>0){
            pos++;
        }
    }
    printf("No. of positive integers in array is %d",pos);
    return 0;
}