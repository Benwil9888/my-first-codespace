#include<stdio.h>
#include<string.h>
int main(){
    char source[]="apple\n";
    char target[]="Apple\n";
    
    printf("the strcmp returns %d",strcmp(source,target));
    
     return 0;
}