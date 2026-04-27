#include <stdio.h>

int main() {
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits in reverse order: ");

    while(num != 0) {
        rem = num % 10;     // get last digit
        printf("%d ", rem); // print digit
        num = num / 10;     // remove last digit
    }

    return 0;
}