#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Select operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition: %.2f\n", a + b);
            break;
        case 2:
            printf("Subtraction: %.2f\n", a - b);
            break;
        case 3:
            printf("Multiplication: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Division: %.2f\n", a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
            break;
    }

    return 0;
}