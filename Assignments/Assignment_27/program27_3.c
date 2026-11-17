/*
Function Name: Difference
Description: Return difference between small and capital characters.
Input: String from user.
Output: Difference between both character counts.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    if(iSmall > iCapital)
    {
        return iSmall - iCapital;
    }
    else
    {
        return iCapital - iSmall;
    }
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}