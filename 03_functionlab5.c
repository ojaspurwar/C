#include <stdio.h>
int greatestOfThree(int a, int b, int c);
int greatestOfThree(int a, int b, int c){
    int result;
    if (a>b && a>c){
        result = printf("%d is the largest",a);
    }else if(b>a && b>c){
        result = printf("%d is the largest",b);
    }else{
        result = printf("%d is largest",c);
    }
}
int main(){
    int num1,num2,num3,num4;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    num4 = greatestOfThree(num1,num2,num3);
    return 0;
}
