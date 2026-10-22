/*
 * Function Name: CheckMultipleDivisibility
 * Description: Checks divisibility by 3, 5, or both.
 * Input: Integer
 * Output: Divisibility Result
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
        printf("Divisible by Both");
    else if(iValue % 3 == 0)
        printf("Divisible by 3 Only");
    else if(iValue % 5 == 0)
        printf("Divisible by 5 Only");
    else
        printf("Not Divisible by Either");
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}