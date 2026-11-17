/*
Function Name: Display
Description: Convert capital character into small and small character into capital.
Input: One character from user.
Output: Converted character or same character.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Output: %c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}