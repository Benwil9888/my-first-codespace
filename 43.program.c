#include<stdio.h>
double average(int a,int b,int c);
 int main(){
    int a=3;
    int b=5;
    int c=4;
    double average;
   average=(a+b+c)/3.0;
    printf("the average of 3 numbers is %lf",average);
    return 0;
}
double average( int a,int b,int c){
return (a+b+c)/3.0;
}