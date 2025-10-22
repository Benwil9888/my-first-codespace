#include<stdio.h>
#include<string.h>
int main(){
    char st[6];
    printf("enter a string of length 5 you want to input using percent c\n");
    for(int i=0;i<5;i++){
        scanf(" %c",&st[i]);
    }
    // include the space before %c to ignore whitespace characters
    // know the difference between %s and %c
    st[5]='\0';
    printf("comparing this string kiprotich gives %d",strcmp("kiprotich",st));
    
    return 0;
}