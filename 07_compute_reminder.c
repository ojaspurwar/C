#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    if (b != 0) {
        printf("Remainder of %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Cannot compute remainder: divisor is zero\n");
    }

    return 0;
}
