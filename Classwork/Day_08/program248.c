// a e i o u 
 
#include<stdio.h>
#include<stdlib.h>

int CountvowelsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i')|| (*str == 'o') || (*str == 'u'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountvowelsX(Arr);

    printf("Frequency of vowels is : %d\n",iRet);

    return EXIT_SUCCESS;
}