#include <stdio.h>

int main() {
    int n;
    int number;
    int sum = 0;

    printf("Enter n number: ");
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        sum += number % 10;
    }

    printf("Sum of last digits: %d\n", sum);
    return 0;
}