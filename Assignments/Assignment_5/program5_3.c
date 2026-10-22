/*
 * Function Name: DisplayGrade
 * Description: Calculates a student's grade from marks.
 * Input: Marks
 * Output: Grade or Invalid Marks
 * Author: Vaishnavi Shingare
 * Date: 22/10/2026
 */
 
#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks < 0 || fMarks > 100)
        printf("Invalid Marks");
    else if(fMarks >= 90)
        printf("Grade A");
    else if(fMarks >= 75)
        printf("Grade B");
    else if(fMarks >= 60)
        printf("Grade C");
    else if(fMarks >= 40)
        printf("Grade D");
    else
        printf("Fail");
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}