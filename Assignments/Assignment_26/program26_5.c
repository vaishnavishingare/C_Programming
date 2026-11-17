/*
Function Name: Display
Description: Display ASCII value of given character in decimal, octal and hexadecimal format.
Input: One character from user.
Output: Decimal, octal and hexadecimal ASCII values.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", (unsigned char)ch);
    printf("Octal        : %04o\n", (unsigned char)ch);
    printf("Hexadecimal  : 0X%02X\n", (unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}