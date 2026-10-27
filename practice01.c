#include <stdio.h>
int doble(int *a);
int doble(int *a){
    *a = *a * *a;
}
int main(){
    int num1;
    printf("Enter a Number:");
    scanf("%d",&num1);
    doble(&num1);
    printf("Doubling...:%d\n",num1);
    return 0;
}