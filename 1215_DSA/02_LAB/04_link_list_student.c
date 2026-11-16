#include <stdio.h>
#include<stdlib.h>

#define MAX 50
int total = 0;

typedef struct Student
{
    int roll;
    char name[100];
    double cgpa;
    struct Student  *next;
} Student;

void add_student(Student *ptr)
{   
    Student *temp = (Student*)malloc(sizeof(Student));
    temp = ptr;
    scanf(" %d", &temp->roll);
    scanf(" %[^\n]", temp->name);
    scanf(" %lf", &temp->cgpa);
    total++;
}


void get_student(Student *ptr)
{   
    Student temp;
    temp = *ptr;
    temp.next = ptr;
    for(;temp.next != NULL;){
        printf("%d %s %.2f\n", temp.roll, temp.name, temp.cgpa);
        temp.next = temp.next->next ;
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
    for (int i = 0; i < total; i++)
    {
        for (int i = 0; i < total; i++)
        {
            if(i < total -1) student[i].next = &student[i+1];
            else student[i].next = NULL;
        }
        
        
    }
    
    get_student(student);

    return 0;
}
