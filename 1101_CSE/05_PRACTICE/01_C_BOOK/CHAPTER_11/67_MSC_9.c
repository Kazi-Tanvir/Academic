// Mastery Skills Check 9: Enumeration of planets
#include <stdio.h>

enum planets {
    mercury,
    venus,
    earth,
    mars,
    jupiter,
    saturn,
    uranus,
    neptune,
    pluto
};

// Entry point of the program
int main(void)
{
    enum planets p = earth;
    printf("Earth is planet index %d\n", p);

    return 0;
}
