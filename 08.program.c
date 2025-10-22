#include<stdio.h>
int main(){
    int grade=80;
    switch(grade){
        case 90:
            printf("A\n");
            break;
            case 80:
            printf("B\n");
            break;
            case 70:
            printf("C\n");
            break;
            case 60:
            printf("D\n");
            break;
           default:
            printf("F\n");
    }
    return 0;
}