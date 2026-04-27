#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[100];
    int i, len, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

   
    len = strlen(str1);
    printf("\nLength = %d\n", len);

   
    for(i = 0; i < len; i++)
    {
        temp[i] = str1[len - i - 1];
    }
    temp[i] = '\0';
    printf("Reversed string = %s\n", temp);

   
    printf("\nEnter second string: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    
    if(strcmp(str1, temp) == 0)
        printf("String is Palindrome\n");
    else
        printf("String is Not Palindrome\n");

    
    if(strstr(str1, str2) != NULL)
        printf("Second string is a Substring of first\n");
    else
        printf("Second string is NOT a Substring\n");

    return 0;
}