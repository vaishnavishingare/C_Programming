#include<stdio.h>
#include<stdlib.h>

void DisplayOddDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 1)        // or != 0
        {
        printf("%d\n",iDigit);
        }
        
        iNo = iNo / 10;
        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayOddDigits(iValue);

    return EXIT_SUCCESS;
}