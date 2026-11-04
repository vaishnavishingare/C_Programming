/*
 * Function Name: RangeDisplayEven
 * Description: Displays all even numbers in the given range.
 * Input: Starting point and ending point
 * Output: Even numbers between the given range
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}