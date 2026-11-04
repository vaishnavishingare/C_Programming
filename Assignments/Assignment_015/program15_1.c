/*
 * Program: Accept and display full name
 * Author: Vaishnavi Shingare
 * Date: 04/11/2026
 */

#include <stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf(" %29[^\n]", Name);

    printf("Your name is %s", Name);

    return EXIT_SUCCESS;
}