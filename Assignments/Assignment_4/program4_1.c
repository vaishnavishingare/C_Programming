#include <stdio.h>
#include <stdlib.h>

/*
 * Function Name: CheckNumber
 * Description: Checks whether a number is positive, negative, or zero.
 * Input: Integer
 * Output: Positive, Negative, or Zero
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */

void CheckNumber(int iValue)
{
    if (iValue > 0)
        printf("Positive Number");
    else if (iValue < 0)
        printf("Negative Number");
    else
        printf("Zero");
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
