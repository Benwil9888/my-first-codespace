#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
     float hike;
    char name[10];
};

int main(){ 
    struct employee e1;
    e1.salary=50000;
    e1.hike=5.5;
    strcpy(e1.name,"benito");
    printf("Name: %s\n",e1.name);
    printf("Salary: %d\n",e1.salary);
    printf("Hike: %.2f\n",e1.hike);
   

    return 0;
}