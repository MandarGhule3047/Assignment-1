#include <stdio.h>
#include <string.h>

struct employee
{
    char name[50];
    char designation[50];
    char gender;
    int day, month, year;
    float salary;
};


void totalEmployees(int n)
{
    printf("\nTotal Employees = %d\n", n);
}


void countGender(struct employee e[], int n)
{
    int i, male = 0, female = 0;

    for(i = 0; i < n; i++)
    {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            male++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            female++;
    }

    printf("Male Employees = %d\n", male);
    printf("Female Employees = %d\n", female);
}


void highSalary(struct employee e[], int n)
{
    int i;
    printf("\nEmployees with salary > 10000:\n");

    for(i = 0; i < n; i++)
    {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }
}


void asstManager(struct employee e[], int n)
{
    int i;
    printf("\nEmployees with designation Asst Manager:\n");

    for(i = 0; i < n; i++)
    {
        if(strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
    }
}

int main()
{
    struct employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Designation: ");
        scanf("%s", e[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &e[i].gender);

        printf("Date of Joining (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].day, &e[i].month, &e[i].year);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    
    totalEmployees(n);
    countGender(e, n);
    highSalary(e, n);
    asstManager(e, n);

    return 0;
}