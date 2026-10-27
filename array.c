#include <stdio.h>
int main(){
    int m[4];
    for (int i = 0; i<4; i++){
        scanf("%d",&m[i]);
    }
    for (int j = 0; j<4;j++){
        printf("Printing number:%d\n",m[j]);
    }
    return 0;
}