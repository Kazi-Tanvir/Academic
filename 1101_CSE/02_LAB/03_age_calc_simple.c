#include<stdio.h>

// Theory

// Input
//  the birth date and current date of a person.

// Calculation
//  Total Days = Year*365 + Month*30 + Day;
// Age in days = birthday in days - current date in days 

//Output
// 2. Convert the age in days into years, months, and days.

int calcAge(int Year , int Month , int Day){
    return Year*365 + Month*30 + Day;
}

int main()
{
    int BirthYear , BirthMonth , BirthDay;
    int CurrentYear , CurrentMonth , CurrentDay;

    printf("Enter Your Birth Date (Format is YYYY MM DD) : ");
    scanf("%d %d %d" , &BirthYear , &BirthMonth , &BirthDay);

    printf("Enter Current Date (Format is YYYY MM DD) : ");
    scanf("%d %d %d" , &CurrentYear , &CurrentMonth , &CurrentDay);

    int BirthTotalDays = calcAge(BirthYear , BirthMonth , BirthDay);
    int CurrentTotalDays = calcAge(CurrentYear , CurrentMonth , CurrentDay);

    int AgeInDays = CurrentTotalDays - BirthTotalDays;

    int AgeInYears = AgeInDays / 365;
    int RemainingDays = AgeInDays % 365;
    int AgeInMonths = RemainingDays / 30;
    int AgeInDaysFinal = RemainingDays % 30;
    
    printf("Your Age is : %d Years, %d Months, and %d Days\n", AgeInYears, AgeInMonths, AgeInDaysFinal);
    return 0;
}