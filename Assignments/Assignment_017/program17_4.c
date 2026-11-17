
/*
Function Name: Pattern
Description: Display alternate positive and negative numbers.
Input: Number of rows and columns.
Output: Positive and negative number pattern.
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
            if(i % 2 != 0)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%d\t", -j);
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
