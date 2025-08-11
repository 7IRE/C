#include <stdio.h>

int main (){
    printf("Enter the No. you want to print table Of:");
    int table;
    scanf("%d",&table);

    int count;
    for(count=1;count<=10;count++){
        printf("%d * %d = %d \n",table,count,count*table);
    }

    return 0;
}