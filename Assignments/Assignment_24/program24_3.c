/*
Function Name: FirstChar
Description: Return index of first occurrence of given character.
Input: String and one character from user.
Output: Index of first occurrence or -1 if not found.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}