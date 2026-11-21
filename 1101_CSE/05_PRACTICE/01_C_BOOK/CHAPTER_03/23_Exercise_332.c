// Exercise 3.3.2: Time delay loop prompting user
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int delay_count, i;

    printf("Enter delay count: ");
    scanf("%d", &delay_count);

    for(i = 0; i < delay_count; i++) ;

    printf("Timer expired.\n");

    return 0;
}
