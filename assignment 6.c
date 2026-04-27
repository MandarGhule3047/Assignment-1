#include <stdio.h>

// Function without recursion (Iterative)
int factorial_iterative(int n) {
    int i, fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Function with recursion
int factorial_recursive(int n) {
    if(n == 0 || n == 1)
        printf("1");
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("\nFactorial using loop = %d\n", factorial_iterative(num));
        printf("Factorial using recursion = %d\n", factorial_recursive(num));
    }

    return 0;
}