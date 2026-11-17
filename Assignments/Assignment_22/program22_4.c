/*
Function Name: Pattern
Description: Display hash, number and star symbols.
Input: Number of elements.
Output: Hash, number and star pattern.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("#\t%d\t*\t", i);
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