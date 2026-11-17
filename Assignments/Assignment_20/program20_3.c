
/*
Function Name: Pattern
Description: Display border and anti-diagonal star pattern.
Input: Number of rows and columns.
Output: Border and anti-diagonal star pattern.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow ||
               j == 1 || j == iCol ||
               i + j == iCol + 1)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
