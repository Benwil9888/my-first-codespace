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
    switch(mathematicalsign){
        case '+':
            printf("the sum is %d\n",numbera+numberb);
            break;
        case '-':
            printf("the difference is %d\n",numbera-numberb);
            break;
        case '*':
            printf("the product is %d\n",numbera*numberb);
            break;
        case '/':
            printf("the quotient is %d\n",numbera/numberb);
            break;
        default:
            printf("invalid input\n");
            break;
    }



    return 0;

}