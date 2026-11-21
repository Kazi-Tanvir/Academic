---
title: "DSA PROJ 01 - student"
aliases:
  - Student Record Project
  - DSA Lab Project 01
tags:
  - course/1215-cse
  - lang/c
  - type/project
  - topic/arrays
  - topic/file-io
  - topic/pointers
  - topic/structs
  - level/intermediate
course: "1215_CSE"
semester: "1.2"
source: "1215_DSA/04_LAB_PROJECT/01_STUDENT/main.c"
up: "[[DSA - Index]]"
related:
  - "[[DSA LAB 02 - student struct]]"
  - "[[DSA LAB 03 - student struct ptr]]"
  - "[[DSA LAB 04 - link list student]]"
  - "[[DSA LAB 05 - link list basic]]"
created: 2026-11-21
status: draft
---
# DSA PROJ 01 - student

> [!abstract] Summary
> A comprehensive student record management system in C: reading structured student data from `data/student_input.txt`, populating a struct array via pointer parameters, and redirecting processed outputs to a binary output file (`data/student_output.bin`).

**Source:** `1215_DSA/04_LAB_PROJECT/01_STUDENT/main.c`

---

## The concept in plain words
Combines procedural modularity, pointer arithmetic, struct arrays, and bidirectional file stream redirection (`freopen`) to build an end-to-end batch processing pipeline for academic student records.

---

## Data structure diagram
```mermaid
flowchart LR
    INPUT_FILE["Input File<br>data/student_input.txt"] -->|freopen stdin| BUFFER["add_student(Student *ptr)"]
    BUFFER -->|Populate| ARRAY["Student student[MAX]<br>Memory Records"]
    ARRAY -->|display(Student *ptr)| OUTPUT_FILE["Output File<br>data/student_output.bin<br>(freopen stdout)"]
```

---

## Code
```c
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
```

---

## How it works
- `freopen("data/student_input.txt", "r", stdin)` redirects standard input stream.
- `freopen("data/student_output.bin", "w", stdout)` redirects standard output stream so all `printf()` statements write directly to disk.
- `add_student(student)` reads roll, name, and CGPA using pointer offset arithmetic `(ptr + total)`.
- `display(student)` outputs all parsed records into the destination output file.

---

## Sample Run
Contents written to `data/student_output.bin`:
```text
roll: 101, name: Tanvir, cgpa: 3.85
roll: 102, name: Hasan, cgpa: 3.90
roll: 103, name: Sakib, cgpa: 3.75
```

---

## Dry run
| Record Index | Roll Number | Student Name | CGPA | Stream Source $\to$ Destination |
| :--- | :--- | :--- | :--- | :--- |
| `student[0]` | 101 | Tanvir | 3.85 | `student_input.txt` $\to$ `student_output.bin` |
| `student[1]` | 102 | Hasan | 3.90 | `student_input.txt` $\to$ `student_output.bin` |
| `student[2]` | 103 | Sakib | 3.75 | `student_input.txt` $\to$ `student_output.bin` |

---

## Complexity
- **Time Complexity**: $O(N)$ where $N$ is the number of student records processed.
- **Space Complexity**: $O(MAX \times \text{sizeof(Student)})$ memory buffer.

---

## Gotchas
> [!warning] Binary vs Text Mode on Windows
> Opening a file with `"w"` on Windows writes standard CRLF line endings (`\r\n`). If true byte-exact binary serialization is required, specify `"wb"` and write struct memory directly with `fwrite(&record, sizeof(Student), 1, fp)`.

---

## Key Takeaways
- `freopen` turns standard console programs into batch file processors without changing `scanf`/`printf` logic.
- Pointers allow modular functions to directly manipulate array buffers declared in outer scopes.

---

## My notes
> [!question]- My notes

## Related
- [[DSA LAB 02 - student struct]] - Foundational struct array
- [[DSA LAB 03 - student struct ptr]] - Pointer passing mechanics
- [[DSA LAB 04 - link list student]] - Dynamic memory linked lists
