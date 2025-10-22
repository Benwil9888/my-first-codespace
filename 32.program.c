#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter a number \n");
    scanf("%d",&n);
    while(i<=10){
        printf("%d + %d=%d\n",i, n,i+n);
        i=i+1;
    }
    return 0;
}