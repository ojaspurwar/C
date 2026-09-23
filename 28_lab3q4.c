#include <stdio.h>
int main(){
    int i = 20;
    while (i <= 40){
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        }
        i++;
    }   
    int j = 50;
    while (j <= 80){
        if (j % 2 != 0) {
            printf("%d is odd\n",j);
        }
        j++;
    }
    return 0;
}