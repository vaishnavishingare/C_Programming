/*
Function Name: Pattern
Description: Display reverse numbers with hash symbols.
Input: Number of elements.
Output: Reverse number and hash pattern.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}