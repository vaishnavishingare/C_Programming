/*
Function Name: struprx
Description: Convert given string into uppercase.
Input: String from user.
Output: String in uppercase.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is %s", arr);

    return 0;
}