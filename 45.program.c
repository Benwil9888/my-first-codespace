#include<stdio.h>
float force(float m);
int main(){
    float m=34;
    float force;
    force=m*9.8;
    printf("the value of force is %f",force);
    return 0;
}

float force(float m){
return m*9.8;
}