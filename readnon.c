#include <stdio.h>

int main() {
    int n, digit, largest;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    largest = n % 10;
    n = n / 10;

    while (n > 0) {
        digit = n % 10;
        if (digit > largest) {
            largest = digit;
        }
        n = n / 10;
    }

    printf("The biggest digit is: %d\n", largest);
    return 0;
}