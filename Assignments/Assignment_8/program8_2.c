#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("Zero\n",iNo);
    }
    else if(iNo == 1)
    {
        printf("One\n",iNo);
    }
    else if(iNo == 2)
    {
        printf("Two\n",iNo);
    }
    else if(iNo == 3)
    {
        printf("Three\n",iNo);
    }
    else if(iNo == 4)
    {
        printf("Four\n",iNo);
    }
    else if(iNo == 5)
    {
        printf("Five\n",iNo);
    }
    else if(iNo == 6)
    {
        printf("Six\n",iNo);
    }
    else if(iNo == 7)
    {
        printf("Seven\n",iNo);
    }
    else if(iNo == 8)
    {
        printf("Eight\n",iNo);
    }
    else if(iNo == 9)
    {
        printf("Nine\n",iNo);
    }
    else
    {
        printf("Invalid number\n",iNo);
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