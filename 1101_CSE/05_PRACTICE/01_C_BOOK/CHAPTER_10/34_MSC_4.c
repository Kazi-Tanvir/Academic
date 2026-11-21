// Mastery Skills Check 4: Array of employee structures written to file EMP
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMP 10

struct emp_type {
    char name[40];
    int id;
    float wage;
    int hours;
} emp[MAX_EMP];

// Entry point of the program
int main(void)
{
    FILE *fp;

    strcpy(emp[0].name, "Alice Smith");
    emp[0].id = 101;
    emp[0].wage = 25.50f;
    emp[0].hours = 40;

    strcpy(emp[1].name, "Bob Jones");
    emp[1].id = 102;
    emp[1].wage = 22.00f;
    emp[1].hours = 38;

    if ((fp = fopen("EMP", "wb")) == NULL) {
        printf("Cannot open file.\n");
        exit(1);
    }

    if (fwrite(emp, sizeof(struct emp_type), 2, fp) != 2) {
        printf("Error writing employee records.\n");
        fclose(fp);
        exit(1);
    }
    fclose(fp);
    printf("Wrote employee records to EMP.\n");

    return 0;
}
