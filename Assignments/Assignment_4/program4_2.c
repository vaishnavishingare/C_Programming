/*
 * Function Name: CheckEvenOdd
 * Description: Checks whether a number is even or odd.
 * Input: Integer
 * Output: Even or Odd
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
 #include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}