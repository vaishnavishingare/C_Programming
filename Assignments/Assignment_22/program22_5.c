/*
Function Name: Pattern
Description: Display even numbers up to given count.
Input: Number of elements.
Output: Even number pattern.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
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