/*Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

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
    struct Student student1, student2;

    // Input details for student 1
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    student1.name[strcspn(student1.name, "\n")] = 0;  // Remove newline

    printf("Roll No: ");
    scanf("%d", &student1.roll_no);

    printf("Marks: ");
    scanf("%f", &student1.marks);
    getchar();  // Consume newline character left by scanf

    // Input details for student 2
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    fgets(student2.name, sizeof(student2.name), stdin);
    student2.name[strcspn(student2.name, "\n")] = 0;  // Remove newline

    printf("Roll No: ");
    scanf("%d", &student2.roll_no);

    printf("Marks: ");
    scanf("%f", &student2.marks);
    getchar();  // Consume newline character left by scanf

    // Check if both students are identical
    if (strcmp(student1.name, student2.name) == 0 &&
        student1.roll_no == student2.roll_no &&
        student1.marks == student2.marks) {
        printf("\nOutput 1:\nSame\n");
    } else {
        printf("\nOutput 1:\nDifferent\n");
    }

    return 0;
}
