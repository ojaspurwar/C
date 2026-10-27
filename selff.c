#include <stdio.h>
int main(){
    int i = 0;
    while (i <= 15){
        if (i % 2 ==0) {
            i++;
            continue;
        }
        printf("Number: %d\n", i);
        i++;
    }
    return 0;
}