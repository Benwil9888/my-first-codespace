 #include<stdio.h>
 int main(){
    char ch1[]="benito\n";
    char *ptr=ch1;
   *ptr="B";
   printf("%s",ch1);
    
     return 0;
 }