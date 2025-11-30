/*Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student find_top_student(struct Student students[], int count) {
    struct Student top_student = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > top_student.marks) {
            top_student = students[i];
        }
    }
    return top_student;
}

int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove newline

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar();  // Consume newline character left by scanf
    }

    struct Student top_student = find_top_student(students, 3);
    printf("\nTop Student: %s | Roll: %d | Marks: %.2f\n", top_student.name, top_student.roll_no, top_student.marks);

    return 0;
}
