#include <stdio.h>

// Define a structure to represent a student
struct Student {
    char name[100];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;
    printf("Enter student name: ");
    gets(student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.4f\n", student.marks);

    return 0;
}
