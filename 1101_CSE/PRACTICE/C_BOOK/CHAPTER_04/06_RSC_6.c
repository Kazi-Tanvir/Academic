// Review Skills Check 6: Repeated conversion menu until Quit
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int choice;
    float val;

    do {
        printf("\nConvert:\n");
        printf("1. feet to meters\n");
        printf("2. meters to feet\n");
        printf("3. ounces to pounds\n");
        printf("4. pounds to ounces\n");
        printf("5. Quit\n");
        printf("Enter choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter feet: ");
                scanf("%f", &val);
                printf("Meters: %f\n", val / 3.28f);
                break;
            case 2:
                printf("Enter meters: ");
                scanf("%f", &val);
                printf("Feet: %f\n", val * 3.28f);
                break;
            case 3:
                printf("Enter ounces: ");
                scanf("%f", &val);
                printf("Pounds: %f\n", val / 16.0f);
                break;
            case 4:
                printf("Enter pounds: ");
                scanf("%f", &val);
                printf("Ounces: %f\n", val * 16.0f);
                break;
            case 5:
                printf("Quitting...\n");
                break;
            default:
                printf("Invalid selection\n");
        }
    } while(choice != 5);

    return 0;
}
