#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do{
        printf("the value of i %d\n",i);
        i=i+1;
    }
    while(i<=n);
    return 0;
}
