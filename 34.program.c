#include<stdio.h>
int main(){
    int i=1;
    int product=1;
    while(i<=10){
        product=product*i;
        i=i+1;
    }
    printf("The product of first 10 natural numbers is %d\n",product);
    return 0;
}