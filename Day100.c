/*Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

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

    // Modify student details
    strcpy(student->name, "John");
    student->roll_no = 106;
    student->marks = 91;

    // Print modified student details
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %.2f\n",
           student->name, student->roll_no, student->marks);

    // Free allocated memory
    free(student);
    return 0;
}
