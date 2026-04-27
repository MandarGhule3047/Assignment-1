#include <stdio.h>

// Structure definition
struct student {
    int roll;
    char name[50];
    int marks[3];
    int total;
    float percentage;
};

int main() {
    struct student s[10];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        for(j = 0; j < 3; j++) {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = s[i].total / 3.0;
    }

    // Display result
    printf("\n--- Student Results ---\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nPercentage: %.2f", s[i].percentage);

        if(s[i].percentage >= 40)
            printf("\nResult: Pass\n");
        else
            printf("\nResult: Fail\n");
    }

    return 0;
}