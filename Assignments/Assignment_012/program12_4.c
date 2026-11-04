/*
 * Function Name: CountFour
 * Description: Counts frequency of digit 4 in a number.
 * Input: One integer number
 * Output: Frequency of digit 4
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}