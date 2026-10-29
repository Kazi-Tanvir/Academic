// Example 11.3.2: Displaying string representation of enumeration
#include <stdio.h>

enum transport {car, train, airplane} how;

char name[][20] = {
    "Automobile",
    "Train",
    "Airplane"
};

// Entry point of the program
int main(void)
{
    how = train;
    printf("Travel method: %s\n", name[how]);

    return 0;
}
