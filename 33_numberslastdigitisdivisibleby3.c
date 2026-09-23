#include <stdio.h>
int main() {
    int n = 0;
    while (n <= 100){
        int last_digit = n % 10;
        if(last_digit % 3 == 0){
            printf("%d ", n);
        }
        n++;
    }
    printf("\n");
    return 0;
}