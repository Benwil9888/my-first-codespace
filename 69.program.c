#include<stdio.h>
int main(){
    char ch1[45];
    printf("enter your name and see the magic\n");
    fgets(ch1,44,stdin); 
    puts(ch1);
    printf("Your name is %s\n",ch1);
    return 0;
}