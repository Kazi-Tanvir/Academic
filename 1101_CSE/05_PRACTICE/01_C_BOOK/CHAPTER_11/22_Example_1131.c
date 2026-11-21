// Example 11.3.1: Defining and using enumerations
#include <stdio.h>

enum transport {car, train, airplane} how;

// Entry point of the program
int main(void)
{
    how = airplane;
    printf("Enum value: %d\n", how);

    return 0;
}
