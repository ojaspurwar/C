#include <stdio.h>

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num1;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Result: %d\n", factorial(num1));
    return 0;
}