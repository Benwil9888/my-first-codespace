#include<stdio.h>
int main(){
    for(int i=0;i<1000;i++){
        if(i==999){
            continue;
        }
        printf("the value of i %d\n",i);
    }
    return 0;
}
