#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 1;

    while( iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}