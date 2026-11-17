/*
Function Name: strtogglex
Description: Toggle uppercase characters into lowercase
             and lowercase characters into uppercase.
Input: String from user.
Output: String with toggled case.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is %s", arr);

    return 0;
}