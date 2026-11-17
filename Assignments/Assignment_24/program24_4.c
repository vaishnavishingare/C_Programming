/*
Function Name: LastChar
Description: Return index of last occurrence of given character.
Input: String and one character from user.
Output: Index of last occurrence or -1 if not found.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iRet = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iRet = iCount;
        }

        iCount++;
        str++;
    }

    return iRet;
}

int main()
{
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}