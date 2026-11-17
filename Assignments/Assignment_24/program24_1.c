/*
Function Name: ChkChar
Description: Check whether given character is present in string or not.
Input: String and one character from user.
Output: TRUE if character is found, otherwise FALSE.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}