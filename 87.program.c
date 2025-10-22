#include<stdio.h>
struct employee{
    int salary;
     float hike;
    char name[10];
};
int main(){
struct employee e2={
    .name="charlie",
    .salary=70000,
    .hike=7.5
};
    printf("Name: %s\n",e2.name);
    printf("Salary: %d\n",e2.salary);
    printf("Hike: %.2f\n",e2.hike);
return 0;
}