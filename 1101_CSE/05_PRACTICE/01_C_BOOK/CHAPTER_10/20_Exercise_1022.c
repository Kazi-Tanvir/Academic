// Exercise 10.2.2: Time and UTC time using gmtime()
#include <stdio.h>
#include <time.h>

// Entry point of the program
int main(void)
{
    struct tm *systime, *gmt;
    time_t t;

    t = time(NULL);
    systime = localtime(&t);

    printf("Local time: %.2d:%.2d:%.2d\n",
           systime->tm_hour, systime->tm_min, systime->tm_sec);

    gmt = gmtime(&t);
    printf("Coordinated Universal Time (UTC): %.2d:%.2d:%.2d\n",
           gmt->tm_hour, gmt->tm_min, gmt->tm_sec);

    return 0;
}
