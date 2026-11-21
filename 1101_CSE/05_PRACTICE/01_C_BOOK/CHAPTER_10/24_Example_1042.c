// Example 10.4.2: Simulation of flight recorder using bit-fields
#include <stdio.h>
#include <stdlib.h>

struct telemetry {
    unsigned fuel: 1;
    unsigned radio: 1;
    unsigned tv: 1;
    unsigned water: 1;
    unsigned food: 1;
    unsigned waste: 1;
} flt_recd;

// Displays telemetry status
void display_telemetry(struct telemetry t)
{
    printf("Fuel: %s, Radio: %s, TV: %s\n",
           t.fuel ? "OK" : "LOW",
           t.radio ? "OK" : "FAIL",
           t.tv ? "OK" : "MALFUNC");
}

// Entry point of the program
int main(void)
{
    flt_recd.fuel = 1;
    flt_recd.radio = 1;
    flt_recd.tv = 0;
    flt_recd.water = 1;
    flt_recd.food = 1;
    flt_recd.waste = 0;

    display_telemetry(flt_recd);

    return 0;
}
