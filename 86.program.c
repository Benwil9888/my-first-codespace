#include<stdio.h>
struct employee{
    int salary;
     float hike;
    char name[10];
};
struct employee e1={60000,6.5,"alice"};
int main(){ 
    printf("Name: %s\n",e1.name);
    printf("Salary: %d\n",e1.salary);
    printf("Hike: %.2f\n",e1.hike);
   

    return 0;
}