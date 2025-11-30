/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joining_date;
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0;  // Remove newline

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // Write to binary file
    FILE *file = fopen("employee.dat", "wb");
    if (file) {
        fwrite(&emp, sizeof(struct Employee), 1, file);
        fclose(file);
        printf("Employee details entered and stored in file.\n");
    } else {
        printf("Error opening file for writing.\n");
    }

    // Read from binary file
    struct Employee emp_read;
    file = fopen("employee.dat", "rb");
    if (file) {
        fread(&emp_read, sizeof(struct Employee), 1, file);
        fclose(file);
        printf("Displays employee data read from file:\n");
        printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
               emp_read.name, emp_read.id, emp_read.joining_date.day,
               emp_read.joining_date.month, emp_read.joining_date.year);
    } else {
        printf("Error opening file for reading.\n");
    }

    return 0;
}
