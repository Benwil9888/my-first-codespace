#include<stdio.h>
int main(){
    int numbera,numberb;
    char mathematicalsign;
    printf("enter number a\n");
    scanf("%d", &numbera);
    printf("enter the mathematical sign\n");
    scanf(" %c",&mathematicalsign);

    printf("enter number b\n");
    scanf("%d",&numberb);
    if(mathematicalsign=='+'){
        printf("the sum is %d\n",numbera+numberb);
    }
    else if(mathematicalsign=='-'){
        printf("the difference is %d\n",numbera-numberb);
    }
    else if(mathematicalsign=='*'){
        printf("the product is %d\n",numbera*numberb);
    }
    else if(mathematicalsign=='/'){
        printf("the quotient is %d\n",numbera/numberb);
    }
    else{
        printf("invalid input\n");
    } 
    return 0;
}