#include <stdio.h>

#define MAX 50
int total = 0;

typedef struct
{
    int roll;
    char name[100];
    double cgpa;
} Student;

void add_student(Student *ptr)
{
    scanf(" %d", &ptr->roll);
    scanf(" %[^\n]", ptr->name);
    scanf(" %lf", &ptr->cgpa);
    total++;
}


void get_student(Student *ptr)
{

    FILE *file = fopen("data/student_output.bin","w+");
    for(int i = 0; i < total; i++){
        fprintf(file, "%d %s %.2f\n", ptr->roll, ptr->name, ptr->cgpa);
        ptr++;
    }
}

int main()
{
    Student student[MAX];
    freopen("data/student_input.txt", "r", stdin);
    for (int i = 0; i < 10; i++)
    {
        add_student(&student[i]);
    }
    get_student(student);

    return 0;
}