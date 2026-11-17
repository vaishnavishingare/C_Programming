/*
Function Name: Display
Description: Display characters from given capital alphabet till Z or small alphabet in reverse till a.
Input: One character from user.
Output: Characters according to given condition.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Display(char ch)
{
    char cTemp = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cTemp = ch; cTemp <= 'Z'; cTemp++)
        {
            printf("%c\t", cTemp);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cTemp = ch; cTemp >= 'a'; cTemp--)
        {
            printf("%c\t", cTemp);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}