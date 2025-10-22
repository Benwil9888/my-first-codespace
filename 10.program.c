#include<stdio.h>
int main(){
    int marks1,marks2,marks3;
    printf("Enter marks1\n");
    scanf("%d",&marks1);
    printf("Enter marks2\n");
    scanf("%d",&marks2);
    printf("Enter marks3\n");
    scanf("%d",&marks3);
    int total=marks1+marks2+marks3;
    printf("Total marks is %d\n",total);
    if(total>=40){
        printf("You are pass\n");
    }
    else{
        printf("You are fail\n");   
    }
    return 0;
}