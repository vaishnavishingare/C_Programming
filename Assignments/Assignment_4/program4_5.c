/*
 * Function Name: CheckDivisibility
 * Description: Checks whether a number is divisible by 5.
 * Input: Integer
 * Output: Divisible or Not Divisible
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
 #include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}