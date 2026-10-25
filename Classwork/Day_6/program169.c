#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }
 
    fAvg = iSum / iCount;       // Need of typecasting

    return fAvg;       
   
}    
int main()
{
    int iValue = 0;
    int fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}