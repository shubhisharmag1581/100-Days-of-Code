/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

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
    struct Student students[5];

    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
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

    // Print all students' details
    printf("\nDetails of 5 students:\n");
    printf("Name\t\tRoll No\tMarks\n");
    printf("-----------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-15s%d\t%.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
