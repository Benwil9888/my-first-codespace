#include<stdio.h>
int main(){
    char source[]="Hello, World!";
    char target[50];
    strcpy(target, source);
    printf("the target string is %s", target);
    return 0;
}