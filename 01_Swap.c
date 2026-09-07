#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}


/*int main(){
    int a, b, temp;

    printf("Enter fisrt number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Swapping Values: a = %d and b = %d\n", a, b);
}
    */