/*
Function Name: CountCapital
Description: Count capital characters in a string.
Input: String from user.
Output: Number of capital characters.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}