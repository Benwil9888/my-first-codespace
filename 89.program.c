#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
     float hike;
    char name[10];
};
struct employee e4={.salary=80000,.hike=8.5,.name="david"};
int main(){
    printf("Name: %s\n",e4.name);
    printf("Salary: %d\n",e4.salary);
    printf("Hike: %.2f\n",e4.hike);
    return 0;
}