#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int divide(int a, int b);
int multiply(int a, int b);
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Invalid");
        return 0;
    }
    else
    {
        return a / b;
    }
}
int multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int num1, num2, num3, result;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("Choose your operator:\n1.+\n2.-\n3.*\n4./\n");
    scanf("%d", &num3);
    switch (num3)
    {
    case 1:
        result = add(num1, num2);
        break;
    case 2:
        result = sub(num1, num2);
        break;
    case 3:
        result = multiply(num1, num2);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Cannot divide by zero.\n");
            return 1;
        }
        result = divide(num1, num2);
        break;
    default:
        printf("Invalid operator choice.\n");
        return 1;
    }
    printf("Result: %d\n", result);
    return 0;
}
