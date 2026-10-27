#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int multi(int a, int b);
int divi(int a, int b);
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}
int divi(int a, int b){
    return a/b;
}
int main(){
    int num1, num2,num3;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    printf("1.+\n2.-\n3.*\n4./\n");
    printf("Enter Oprator:");
    scanf("%d",&num3);
    switch (num3){
        case 1:
        int sum = add(num1,num2);
        printf("The sum is:%d",sum);
        break;
        
        case 2:
        int subs = sub(num1,num2);
        printf("The sub is:%d",subs);
        break;


        case 3:
        int mul = multi(num1,num2);
        printf("The mul is:%d",mul);
        break;


        case 4:
        if(num2 == 0){
            printf("Invalid");
        }else{
        int division = divi(num1,num2);
        printf("The div is:%d",division);
        break;

        }

    }
    printf("\n");
    return 0;

}