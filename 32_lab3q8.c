#include <stdio.h>
int main(){
    int i = 0;
    while (i<100){
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d is divisible by 3 or 5\n", i);
        }
        i++;
    }
    return 0;
}

