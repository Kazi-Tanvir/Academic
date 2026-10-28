#include<stdio.h>

int countDays(int Year , int Month , int Day){
    char month[13] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //check leap year 
    for(int i = 0 ; i < Year ; i++){
        if(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0){
            Day += 366;
        }
        else{
            Day += 365;
        }
    }
    if(Year % 4 == 0 && Year % 100 != 0 || Year % 400 == 0){
        month[1] = 29;
        for(int i = 0 ; i < Month ; i++){
            Day += month[i];
        }
    }
    else{
        for(int i = 0 ; i < Month ; i++){
            Day += month[i];
        }
    }
    return Day;
       
    }


int main()
{
    int BirthYear , BirthMonth , BirthDay;
    int CurrentYear , CurrentMonth , CurrentDay;

    printf("Enter Your Birth Date (Format is YYYY MM DD) : ");
    scanf("%d %d %d" , &BirthYear , &BirthMonth , &BirthDay);
    int totalBirthDays = countDays(BirthYear , BirthMonth , BirthDay);

    printf("Enter Current Date (Format is YYYY MM DD) : ");
    scanf("%d %d %d" , &CurrentYear , &CurrentMonth , &CurrentDay);
    int totalCurrentDays = countDays(CurrentYear , CurrentMonth , CurrentDay);

    int AgeInDays = totalCurrentDays - totalBirthDays;
    
    int AgeInYears = AgeInDays / 365;
    int RemainingDays = AgeInDays % 365;
    int AgeInMonths = RemainingDays / 30;
    int AgeInDaysFinal = RemainingDays % 30;

    printf("Your age is: %d years, %d months, and %d days\n", AgeInYears, AgeInMonths, AgeInDaysFinal);

    return 0;
}