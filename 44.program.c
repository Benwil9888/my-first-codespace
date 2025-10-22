#include<stdio.h>
float fahrenheit(float a);
int main(){
    float a =67;
    
    float fahrenheit;
    fahrenheit= ((a*9/5)+32);
    printf("the value of temperature in fahrenheit is %f",fahrenheit);
    return 0;
}

float fahrenheit(float a ){
return  ((a*9/5)+32);
}