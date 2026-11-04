/*
 * Function Name: DisplayDigit
 * Description: Displays digits of a number in reverse order.
 * Input: One integer number
 * Output: Digits in reverse order
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("0");
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}