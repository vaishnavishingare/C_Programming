/*
 * Function Name: NonFact
 * Description: Displays all non-factors of a number.
 * Input: One positive integer number
 * Output: Non-factors of the given number
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid number");
        return;
    }

    for(iCnt = 2; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return EXIT_SUCCESS;
}