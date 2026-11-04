/*
 * Function Name: FactRev
 * Description: Displays all proper factors in decreasing order.
 * Input: One positive integer number
 * Output: Factors in decreasing order
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid number");
        return;
    }

    for(iCnt = iNo / 2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}