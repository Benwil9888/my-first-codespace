#include<stdio.h>
int main(){
    int i=1;
    while(i<=10){
        printf("the value of i is %d\n",i);
        i++;
        printf("%d +%d = %d\n",i,i+1,i+1+i);
    }
    return 0;
}