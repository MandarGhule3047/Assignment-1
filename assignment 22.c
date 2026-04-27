#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n String Operations Menu \n");
    printf("1. Length of string\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare strings\n");
    printf("5. Reverse string\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied string = %s\n", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are Equal\n");
            else
                printf("Strings are Not Equal\n");
            break;

        case 5:
            strrev(str1);  
            printf("Reversed string = %s\n", str1);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}