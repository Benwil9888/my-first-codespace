#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char name[20];
};  

int main() {
struct employee e1;
struct employee *ptr;
ptr=&e1;

    ptr->salary=10000;
    ptr->hike=5.5;
    strcpy(ptr->name,"ALEX");
    printf("Name: %s\n",ptr->name);
    printf("Salary: %d\n",ptr->salary);
    printf("Hike: %.2f\n",ptr->hike); 
    return 0;
} 
