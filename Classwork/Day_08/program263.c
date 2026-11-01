#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0, iCountSpecial = 0;

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
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigit++;        
        }
        else
        {
            iCountSpecial++;
        }
        str++;
    }
    printf("Number of Capital letter : %d\n",iCountCapital);
    printf("Number of Small letter : %d\n",iCountSmall);
    printf("Number of Digit : %d\n",iCountDigit);
    printf("Number of Special letter : %d\n",iCountSpecial);
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