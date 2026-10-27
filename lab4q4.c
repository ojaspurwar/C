#include <stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter n Numbers");
    scanf("%d",&a);

    if (a<0){
        return 0;
    }

    for (int i = 0; i<a; i++){
        scanf("%d",&b);
        sum += (b / 100) * 10 + b % 10;

    }
    printf("The Sum of number removing the last second digit:%d\n",sum);
    return 0;
}