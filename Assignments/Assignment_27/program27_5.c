/*
Function Name: Reverse
Description: Display string in reverse order.
Input: String from user.
Output: String in reverse order.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Reverse(char *str)
{
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }

    printf("%s", str);
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    Reverse(arr);

    return 0;
}