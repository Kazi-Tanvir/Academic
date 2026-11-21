// Example 10.2.2: Using structure pointers with time functions
#include <stdio.h>
#include <time.h>

// Entry point of the program
int main(void)
{
    struct tm *systime;
    time_t t;

    t = time(NULL);
    systime = localtime(&t);

    printf("Current time: %.2d:%.2d:%.2d\n",
           systime->tm_hour, systime->tm_min, systime->tm_sec);
    printf("Date: %.2d/%.2d/%.2d\n",
           systime->tm_mon + 1, systime->tm_mday, systime->tm_year % 100);

    return 0;
}
