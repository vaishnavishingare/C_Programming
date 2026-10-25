#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CkeckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iRev == iNo)  // ISSUE
    {
        return true;
    }
    else
    {
        return false;
    }

    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Pallindrome : %d\n",bRet);
    }
    else
    {
        printf("Number is Pallindrome : %d\n",bRet);
    }

    

    return EXIT_SUCCESS;
}