/*
 * Function Name: CheckTriangle
 * Description: Checks whether three sides form a valid triangle.
 * Input: Three Side Lengths
 * Output: Valid or Invalid Triangle
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int a, int b, int c)
{
    if(a > 0 && b > 0 && c > 0 &&
       a + b > c && a + c > b && b + c > a)
        printf("Valid Triangle");
    else
        printf("Invalid Triangle");
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides : ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}