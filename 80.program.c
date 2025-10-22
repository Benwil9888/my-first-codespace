#include<stdio.h>
#include<string.h>
int main(){
    char source[50]="benito\n";
    char target[]="is a nice boy\n";
    strcat(source,target);
    printf("the source string %s",source);
    
     return 0;
}