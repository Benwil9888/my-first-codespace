#include<stdio.h>
int main(){
    int i=12;
    int *j=&i;
    printf("the value of i is %d\n",*j);
  printf("the address of i is %u\n",&i);
    return 0;
}