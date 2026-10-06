#include <stdio.h>
int main() {
    int i = 0;
    while (i <= 100) {
        int last_digit = i % 10;
        if (last_digit >= 5 && last_digit <= 8) {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}