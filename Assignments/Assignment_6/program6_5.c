/*
 * Function Name: CalculateBonus
 * Description: Calculates an employee's bonus using salary and service years.
 * Input: Salary and Years of Service
 * Output: Employee Bonus
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    if(fSalary <= 0 || iYears < 0)
        printf("Invalid Input");
    else if(iYears > 10)
        printf("Bonus = %.2f", fSalary * 0.15);
    else if(iYears >= 5)
        printf("Bonus = %.2f", fSalary * 0.10);
    else
        printf("Bonus = %.2f", fSalary * 0.05);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service : ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}