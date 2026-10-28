#include <stdio.h>
int main(){
    float x[3][4] = {{1,2,3,8}, {4,5,6,7}, {9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}