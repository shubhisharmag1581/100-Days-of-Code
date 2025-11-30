/*Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[3];
    float highest_marks = -1;
    int topper_index = -1;

    // Input details for 3 students
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

        // Find topper
        if (students[i].marks > highest_marks) {
            highest_marks = students[i].marks;
            topper_index = i;
        }
    }

    // Print topper's details
    if (topper_index != -1) {
        printf("\nTopper: %s (Marks: %.2f)\n", students[topper_index].name, students[topper_index].marks);
    }

    return 0;
}
