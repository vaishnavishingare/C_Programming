#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 == 1)
        {
            iFact = iFact * iNo;
        }
        iNo--;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);


    return EXIT_SUCCESS;
}