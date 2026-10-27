#include <stdio.h>
int swap(int a, int b);
int swap(int a, int b){
    int temp,result;
    temp = a;
    a = b;
    b = temp;
    result = printf("%d %d",a,b);
}
int main(){
    int num1,num2,num3;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    num3 = swap(num1,num2);
    return 0;
}
