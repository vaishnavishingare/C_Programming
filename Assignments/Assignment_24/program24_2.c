/*
Function Name: CountChar
Description: Count frequency of given character in string.
Input: String and one character from user.
Output: Frequency of given character.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}