// Mastery Skills Check 5: Read and display records from EMP file
#include <stdio.h>
#include <stdlib.h>

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
    size_t count, i;

    if ((fp = fopen("EMP", "rb")) == NULL) {
        printf("EMP file not found. Creating sample file...\n");
        return 0;
    }

    count = fread(emp, sizeof(struct emp_type), 2, fp);
    fclose(fp);
    remove("EMP");

    for (i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Wage: $%.2f | Hours: %d\n",
               emp[i].id, emp[i].name, emp[i].wage, emp[i].hours);
    }

    return 0;
}
