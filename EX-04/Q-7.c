#include <stdio.h>

int main (){
    printf("Enter the No. :");
    int table,mul=0,sum=0;
    scanf("%d",&table);

    int count;
    for(count=1;count<=10;count++){
        mul=count*table;
        sum+=mul;
    }
    printf("The sum of all the values in a multiplication table is %d",sum);
    return 0;
}