/*
 * Function Name: FindGreatest
 * Description: Finds the greatest among three numbers.
 * Input: Three Integers
 * Output: Greatest Number
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is Greater", iFirst);
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is Greater", iSecond);
    }
    else
    {
        printf("%d is Greater", iThird);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}