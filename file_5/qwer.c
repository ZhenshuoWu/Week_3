#include <stdio.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    char mark [2];
};

int main () {
    struct student new_student = {"Name Surname",.student_id="28932123", "35"};
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %s\n", new_student.mark);
    return 0;
}