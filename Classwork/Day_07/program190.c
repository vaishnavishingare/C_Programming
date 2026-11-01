/*
    Input:      4
    Output:   -4 -3 -2 -1 0

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo;iCnt <= 0; iCnt++)   // 0(N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");

    for(iCnt = 1;iCnt <= iNo; iCnt++)    // 0(N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

// Time Complexity : 0(2N)

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}