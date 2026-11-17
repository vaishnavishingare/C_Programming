/*
Function Name: DisplayDigit
Description: Display only digits from given string.
Input: String from user.
Output: Only digits from the string.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}