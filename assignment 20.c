#include <stdio.h>

// Function without pointers
void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside function (after swap): a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(x, y);

    printf("After function call: x = %d, y = %d\n", x, y);

    return 0;
}