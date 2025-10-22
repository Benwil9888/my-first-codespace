#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if(number%5==0){
        printf("the number is divisible by 5\n");
    }
    else {
        printf("the number is not divisible by 5\n");
    }
    return 0;
}