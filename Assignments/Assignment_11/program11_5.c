/*
 * Function Name: RangeDisplayRev
 * Description: Displays all numbers in the range in reverse order.
 * Input: Starting point and ending point
 * Output: Numbers in reverse order
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return EXIT_SUCCESS;
}