#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}