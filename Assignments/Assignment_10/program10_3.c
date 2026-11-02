#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    return (iNo * 1000);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters : %d",iRet);

    return EXIT_SUCCESS;
}