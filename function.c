#include <stdio.h>
int add(int a, int b);
int main(void){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    int sum = add(num1,num2);
    printf("Sum: %d\n",sum);
    return 0;
}
int add(int a ,int b){
    return a + b;
}