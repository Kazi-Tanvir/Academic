#include<stdio.h>
#include<string.h>

typedef struct Student
{
    int roll;
    char name[100];
    double cgpa;
    struct Student *next;
} Student;

int main(){
    Student a,b,c;

    a.roll = 1812;
    b.roll = 1812;
    c.roll = 1812;
    
    strcpy(a.name, "Kazi Tanvir");
    strcpy(b.name, "Kazi Tanvir");
    strcpy(c.name, "Kazi Tanvir");

    
    a.roll = 1812;
    b.roll = 1812;
    c.roll = 1812;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    Student temp;
    temp.next = &a;

    while (temp.next != NULL)
    {
        printf("Address: %p\n", temp.next);
        temp.next = temp.next->next;
    }
    

}
