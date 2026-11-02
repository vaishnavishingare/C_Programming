#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n",iNo);
    }
    else if(iNo > 100)
    {
        printf("Large\n",iNo);
    }
    else 
    {
        printf("Medium\n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}