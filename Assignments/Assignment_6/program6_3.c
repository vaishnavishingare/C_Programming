/*
 * Function Name: CalculateDiscount
 * Description: Calculates the final amount after discount.
 * Input: Purchase Amount
 * Output: Final Payable Amount
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    if(fAmount < 0)
        printf("Invalid Amount");
    else if(fAmount >= 5000)
        printf("Payable Amount = %.2f", fAmount * 0.8);
    else if(fAmount >= 1000)
        printf("Payable Amount = %.2f", fAmount * 0.9);
    else
        printf("Payable Amount = %.2f", fAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}