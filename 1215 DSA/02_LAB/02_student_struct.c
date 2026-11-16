#include<stdio.h>

#define MAX 50
int total = 0;

typedef struct{ 
    int roll;
    char name[100];
    double cgpa;
}Student;
Student student[MAX];


void add_student(){
    scanf(" %d", &student[total].roll);
    scanf(" %[^\n]" ,student[total].name);
    scanf(" %lf", &student[total].cgpa);
    total++;
}

void get_student(){
    for(int i = 0; i < total; i++)
    printf("%d %s %.2f\n", student[i].roll, student[i].name, student[i].cgpa);
}

int main(){
    freopen("input.txt", "r", stdin);
    for(int i = 0; i < 10; i++)
        add_student();
    get_student();

    return 0;
}