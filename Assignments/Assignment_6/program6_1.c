/*
 * Function Name: CalculateElectricityBill
 * Description: Calculates the electricity bill using slab rates.
 * Input: Units Consumed
 * Output: Total Electricity Bill
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
        printf("Invalid Units");
    else if(iUnits <= 100)
        fBill = iUnits * 5;
    else if(iUnits <= 200)
        fBill = 500 + (iUnits - 100) * 7;
    else
        fBill = 1200 + (iUnits - 200) * 10;

    if(iUnits >= 0)
        printf("Bill = %.2f", fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}