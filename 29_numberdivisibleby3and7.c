#include <stdio.h>
int main () {
    int i = 0;
    while (i <= 100){
        if (i % 3 == 0) {
            printf("%d is divisible by 3\n", i);
        }
        i++;
    }
    i = 0;
    while (i <= 100){
        if (i % 7 == 0) {
            printf("%d is divisible by 7\n", i);
        }
        i++;
    }
    return 0;
}