#include <stdio.h>

int main (){
    printf("starting");
    int min[3][3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                scanf("%d",&min[i][j][k]);
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("%d \n",min[i][j][k]);
            }
        }
    }
    return 0;
}