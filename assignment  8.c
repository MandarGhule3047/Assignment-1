#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    // Check pass condition
    if(m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40) {
        printf("Result: FAIL\n");
    } 
    else {
        // Calculate total and percentage
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5.0;

        printf("Result: PASS\n");
        printf("Percentage = %.2f\n", percentage);

        // Grade calculation
        if(percentage >= 75)
            printf("Grade: Distinction\n");
        else if(percentage >= 60)
            printf("Grade: First Division\n");
        else if(percentage >= 50)
            printf("Grade: Second Division\n");
        else if(percentage >= 40)
            printf("Grade: Third Division\n");
    }

    return 0;
}