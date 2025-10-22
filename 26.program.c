#include<stdio.h>
int main(){
  int i=0;
  while(i<7){
   if(i==5){
    break;
   }
     printf("the value of i %d\n",i);
   i=i+1;
   }
   
   printf("we are out of this loop\n");
  
   
  
  return 0;
}