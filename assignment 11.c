#include <stdio.h>
#include <math.h>

// Prime check
int isPrime(int n) {
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// Factorial
int factorial(int n) {
    int i, fact = 1;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Prime factors
void primeFactors(int n) {
    int i;

    printf("Prime factors: ");
    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
}

int main() {
    int num, choice;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n--- Menu ---\n");
    printf("1. Square root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Square root = %.2f\n", sqrt(num));
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            if(isPrime(num))
                printf("Number is Prime\n");
            else
                printf("Number is Not Prime\n");
            break;

        case 5:
            if(num >= 0)
                printf("Factorial = %d\n", factorial(num));
            else
                printf("Factorial not defined for negative numbers\n");
            break;

        case 6:
            if(num > 1)
                primeFactors(num);
            else
                printf("Prime factors not possible\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}