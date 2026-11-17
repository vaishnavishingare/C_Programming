/*
Function Name: strlwrx
Description: Convert given string into lowercase.
Input: String from user.
Output: String in lowercase.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}