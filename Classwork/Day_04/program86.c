/*
----------------------------------------
            Operaion ||
----------------------------------------
Result1      Result2     Final Result
----------------------------------------
TRUE          TRUE          TRUE          // SHORT CIRCUIT
TRUE          FALSE         TRUE          // SHORT CIRCUIT
FALSE         TRUE          TRUE
FALSE         FALSE         FALSE
----------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) || (iNo % 5) == 0)
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}