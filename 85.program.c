#include<stdio.h>
int main(){
    struct employee{
        int salary;
         float hike;
        char name[10];
    };
    struct employee e[3];
    for(int i=0;i<3;i++){
        printf("Enter details of employee %d\n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Salary: ");
        scanf("%d",&e[i].salary);
        printf("Hike: ");
        scanf("%f",&e[i].hike);
    }
     for(int i=0;i<3;i++){
        printf("\nDetails of employee %d\n",i+1);
        printf("Name: %s\n",e[i].name);
        printf("Salary: %d\n",e[i].salary);
        printf("Hike: %.2f\n",e[i].hike);
    }
    return 0;
}