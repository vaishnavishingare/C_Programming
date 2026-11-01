#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else
        {
            iCountDigit++;         // ISSUE
        }
        str++;
    }
    printf("Number of Capital letter : %d\n",iCountCapital);
    printf("Number of Capital letter : %d\n",iCountSmall);
    printf("Number of Capital letter : %d\n",iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    printf("Frequency : %d\n",iRet);

    return EXIT_SUCCESS;
}