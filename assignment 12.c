#include <stdio.h>

// Function to find smallest divisor (other than 1)
int smallestDivisor(int n) {
    int i;

    for(i = 2; i <= n; i++) {
        if(n % i == 0) {
            return i;
        }
    }
    return n;
}

// Function to find GCD
int findGCD(int a, int b) {
    int i, gcd;

    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nSmallest divisor of %d = %d\n", num1, smallestDivisor(num1));
    printf("Smallest divisor of %d = %d\n", num2, smallestDivisor(num2));

    printf("\nGCD of %d and %d = %d\n", num1, num2, findGCD(num1, num2));

    return 0;
}