#include <stdio.h>
int main(){
    int a;
    int num;
    int sum=0;
    printf("Enter n Number;");
    scanf("%d",&a);

    if (a<=0){
        return 0;
    }

    for (int i = 0;i<a;i++){
        scanf("%d",&num);
        sum += num / 10;
    }

    printf("Sum after deleting last digit: %d\n",sum);
    return 0;
}
