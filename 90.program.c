#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
     float hike;
    char name[10];
};
int main(){ 
    struct employee e3={200000,10.5,"eva"};
    e3.salary=5000;
    e3.hike=2.5;
    strcpy(e3.name,"BENITO");
    printf("Name: %s\n",e3.name);
    printf("Salary: %d\n",e3.salary);
    printf("Hike: %.2f\n",e3.hike); 
    return 0;
}