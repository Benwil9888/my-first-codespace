#include<stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(int i=10; i>=1; i=i-1){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}