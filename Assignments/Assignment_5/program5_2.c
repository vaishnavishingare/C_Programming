/*
 * Function Name: CheckLeapYear
 * Description: Checks whether a year is a leap year.
 * Input: Year
 * Output: Leap Year or Not a Leap Year
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear > 0 && (iYear % 400 == 0 || (iYear % 4 == 0 && iYear % 100 != 0)))
    {
        printf("Leap Year");
    }    
    else
    {
        printf("Not a Leap Year");
    }    
}

int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
