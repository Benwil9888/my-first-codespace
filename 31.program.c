#include<stdio.h>
int main(){
    int n,i=30;
    printf("Enter a number\n");
    scanf("%d",&n);
    do{
printf("%d x %d = %d\n",n,i,n*i);
i=i-1;
    }
    while(i>=1);
    return 0;
}