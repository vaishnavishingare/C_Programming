
/*
Function Name: Pattern
Description: Display continuous numbers row-wise.
Input: Number of rows and columns.
Output: Continuous number pattern.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>
#include <stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCnt);
            iCnt++;
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
