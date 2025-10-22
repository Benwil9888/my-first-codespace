#include<stdio.h>
int main(){
    int i=5;
int *ptr=&i;
printf("the value of i is %d\n",i);
printf("the value of ptr is %u\n",*ptr);
printf("the address of i is %u\n",&i);
return 0;
} 