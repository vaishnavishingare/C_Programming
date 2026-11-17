/*
Function Name: DisplayASCII
Description: Display ASCII table with symbol, decimal, hexadecimal and octal values.
Input: No input.
Output: ASCII table from 0 to 255.
Author: Vaishnavi Shingare
Date: 17/11/2026
*/

#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n", (unsigned char)i, i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}