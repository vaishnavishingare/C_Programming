#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo = iNo / 10;
        
    }

    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        
    }

    return iSum;
}

float AverageDigits(int iNo)
{
    int iDigit = 0, iSum = 0, iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo);
    iCount = CountDigits(iNo);
 
    fAvg = (float)iSum / (float)iCount;       

    return fAvg;       
   
}    
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %.2f\n",fRet);

    return EXIT_SUCCESS;
}