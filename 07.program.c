#include<stdio.h>
int main(){
    double radius,area;
    printf("enter radius");
    scanf("%lf",&radius);
    area= 3.14 *radius*radius;
    printf("area of a circle %lf",area);
    return 0;
}