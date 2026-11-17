/*
Function Name: CountWhite
Description: Count number of white spaces in given string.
Input: String from user.
Output: Number of white spaces.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d", iRet);

    return 0;
}