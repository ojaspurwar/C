#include <stdio.h>
int isEven(int a);
int isEven(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num1, result;
    printf("Enter a number:");
    scanf("%d", &num1);
    result = isEven(num1);
    printf("%d is Even, The Statement is:%d\n", num1, result);
    printf("\n");
    return 0;
}