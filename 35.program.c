#include <stdio.h>

void displayHeader();  // function declaration

int main() {
    // Customer 1
    displayHeader();
    printf("Items for Customer 1...\n\n");

    // Customer 2
    displayHeader();
    printf("Items for Customer 2...\n\n");

    // Customer 3
    displayHeader();
    printf("Items for Customer 3...\n\n");

    return 0;
}

void displayHeader() {
    printf("==== RECEIPT ====\n");
    printf("Shop: ABC Supermarket\n");
    printf("Date: 24/09/2025\n");
    printf("=================\n\n");
}
