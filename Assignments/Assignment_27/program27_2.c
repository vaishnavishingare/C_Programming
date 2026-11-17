/*
Function Name: CountSmall
Description: Count small characters in a string.
Input: String from user.
Output: Number of small characters.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}