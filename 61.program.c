#include<stdio.h>
int main(){
    int marks[3]={1,2,4};
    // &marks[0]=>marks
  int  *ptr=marks;
  *ptr=34;
    ptr++;
  *ptr=90;
    printf("the marks scored by student 0 is %d\n",marks[0]);
    printf("the marks scored by student 1 is %d\n",marks[1]);
    return 0;
}  