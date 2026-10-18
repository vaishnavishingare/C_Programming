/*
----------------------------------------
            Operaion &&
----------------------------------------
Result1      Result2     Final Result
----------------------------------------
TRUE          TRUE           TRUE
TRUE          FALSE          FALSE
FALSE         TRUE           FALSE           // SHORT CIRCUIT
FALSE         FALSE          FALSE           // SHORT CIRCUIT
----------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 5) && (iNo % 3) == 0)
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