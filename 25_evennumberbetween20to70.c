#include <stdio.h>
int main() {
    int i = 20;
    while (i <= 70) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        }
        i++;
    }
    return 0;
}
