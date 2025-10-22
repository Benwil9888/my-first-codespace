#include<stdio.h>
int fibonacci(int a);
int main(){
    int a= 10;
    int fibonacci;
    
    printf("the fibonacci series is %d",fibonacci);
    return 0;
}
Here is a simple implementation of the Fibonacci sequence formula in C language using different approaches:

1. Iterative Approach
This method uses a loop to calculate the Fibonacci sequence.
C#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}


2. Recursive Approach
This method uses recursion to calculate Fibonacci numbers.
C#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}


3. Dynamic Programming Approach
This method optimizes the recursive approach by storing intermediate results.
C#include <stdio.h>

void fibonacci(int n) {
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("Fibonacci Sequence: %d %d ", fib[0], fib[1]);
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}


Each approach has its own advantages:

Iterative: Simple and efficient.
Recursive: Elegant but less efficient for large inputs.
Dynamic Programming: Combines efficiency and clarity.

