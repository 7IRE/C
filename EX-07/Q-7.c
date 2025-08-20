#include <stdio.h>

int main (){
    int tables[3][10]={{2,4,6,8,10,12,14,16,18,20},{3,6,9,12,15,18,21,24,27,30},{7,14,21,28,35,42,49,56,63,70}};
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d \n",tables[i][j]);
        }
    }
    return 0;
}