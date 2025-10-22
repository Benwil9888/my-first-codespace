#include <stdio.h>

void displayHeader(int customerNumber);  // function declaration

int main() {
    int i;
    for (i = 1; i <= 5; i++) {   // loop for 5 customers
        displayHeader(i);        // call with customer number
        printf("Items for Customer %d...\n\n", i);
    }
    return 0;
}

void displayHeader(int customerNumber) {
    printf("==== RECEIPT ====\n");
    printf("Shop: ABC Supermarket\n");
    printf("Date: 24/09/2025\n");
    printf("Customer %d\n", customerNumber);
    printf("=================\n\n");
}




