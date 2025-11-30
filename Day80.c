/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then
 read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};
int main() 
{
    FILE *file;
    struct Student student;
    int n, i;

    // Take number of students from user
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Open file in write mode to store student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input student records and write to file
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", student.name, &student.roll, &student.marks);
        fprintf(file, "%s %d %d\n", student.name, student.roll, student.marks);
    }

    // Close the file after writing
    fclose(file);

    // Reopen the file in read mode to display student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    // Read and display each student record
    while (fscanf(file, "%s %d %d", student.name, &student.roll, &student.marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll, student.marks);
    }

    // Close the file
    fclose(file);

    return 0;
}