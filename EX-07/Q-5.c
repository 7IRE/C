#include <stdio.h>


void reverse(int a,int *marks);

int main (){
    int marks[9]={1,2,3,4,5,6,7,8,9};
    reverse(9,marks);
    for(int i=0;i<9;i++){
        printf("%d \n",marks[i]);
    }
    return 0;
}

void reverse(int a,int *marks){
    int b=a/2;
    for(int i=0;i<b;i++){
        int temp=marks[i];
        marks[i]=marks[a-i-1];
        marks[a-i-1]=temp;
    }
}