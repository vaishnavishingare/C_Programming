/*
Function Name: Pattern
Description: Display uppercase alphabets.
Input: Number of elements.
Output: Uppercase alphabet pattern.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", 'A' + i - 1);
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