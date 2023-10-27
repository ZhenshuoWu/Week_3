#include <stdio.h>

typedef struct {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
} student;

int main () {

    student students [] = {
        {"Alice Smith",    "64827593", 67},
        {"Bob Johnson",    "19374650", 89},
        {"Charlie Brown",  "82056914", 76},
        {"David Davis",    "45790182", 44},
        {"Eve Wilson",     "36102478", 91},
        {"Frank Anderson", "93571826", 53},
        {"Grace Lee",      "50249867", 78},
        {"Hannah Clark",   "74820591", 62},
        {"Isaac Harris",   "61093745", 89},
        {"Jack White",     "92847501", 72},
    };
    // Populate the student array using a loop
    for (int i = 0; i < 3; i++) {
        strcpy(students[i].name, names[i]);
        strcpy(students[i].student_id, ids[i]);
        students[i].mark = marks[i];
    }

    // Output the data
    printf("Student data:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, ID: %s, Mark: %u\n", i+1, students[i].name, students[i].student_id, students[i].mark);
    }

    return 0;
}