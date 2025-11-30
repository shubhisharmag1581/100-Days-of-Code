/*Q149: Use malloc() to allocate structure memory dynamically and print details.

Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

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
    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input student details
    printf("Enter Student Name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = 0;  // Remove newline

    printf("Enter Roll No: ");
    scanf("%d", &student->roll_no);

    printf("Enter Marks: ");
    scanf("%f", &student->marks);

    // Print student details
    printf("\nName: %s | Roll: %d | Marks: %.2f\n",
           student->name, student->roll_no, student->marks);

    // Free allocated memory
    free(student);
    return 0;
}
