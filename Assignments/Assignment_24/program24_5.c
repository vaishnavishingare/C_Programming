/*
Function Name: StrRevX
Description: Reverse given string in place.
Input: String from user.
Output: Reversed string.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[100];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}