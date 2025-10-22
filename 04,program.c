#include<stdio.h>
int main(){
    float radius,height,volume;
    printf("enter radius");
    scanf("%f",&radius);
    printf("enter height");
    scanf("%f",&height);
    volume=3.14*radius*radius*height;
    printf("volume of cylinder is %f",volume);
    return 0;
}