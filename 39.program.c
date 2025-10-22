#include<stdio.h>
int area(int,int);
int main(){
    int a=5;
    int b=5;
    printf("Area of square is %d",area(a,b));
    return 0;
    
}
int area(int a,int b){
    return a*b;
}