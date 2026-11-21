#include <stdio.h>

// CGPA Calculation
//  80 > 4
//  75 > 3.75
//  70 > 3.5
//  65 > 3.25
//  60 > 3
//  55 > 2.75
//  50 > 2.5
//  45> 2.25
//  40 > 2
//  40 < 0

float checkCGPA(int marks)
{
    float cgpa;
    // if (marks )
    if (marks >= 80 && marks <= 100)
    {
        cgpa = 4.0;
    }
    else if (marks >= 75)
    {
        cgpa = 3.75;
    }
    else if (marks >= 70)
    {
        cgpa = 3.5;
    }
    else if (marks >= 65)
    {
        cgpa = 3.25;
    }
    else if (marks >= 60)
    {
        cgpa = 3.0;
    }
    else if (marks >= 55)
    {
        cgpa = 2.75;
    }
    else if (marks >= 50)
    {
        cgpa = 2.5;
    }
    else if (marks >= 45)
    {
        cgpa = 2.25;
    }
    else if (marks >= 40)
    {
        cgpa = 2.0;
    }
    else
    {
        cgpa = 0;
    }
    return cgpa;
}

void main()
{
    int sub[7], cgpa[7];
    printf("enter Your Marks : (Format is 110X) \n");

    for (int i = 0; i < 7; i++)
    {

        scanf("%d", &sub[i]);
    }

    float sum = 0;
    for (int i = 0; i < 7; i++)
    {

        if (i < 6)
        {
            sum += checkCGPA(sub[i]) * 3;
        }
        else
        {
            sum += checkCGPA(sub[i]) * 1.5;
        }
    }

    float grade = sum / 19.5;

    printf("%.2f", grade);
}
