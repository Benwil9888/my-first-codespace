#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(int i=0;i<30;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}