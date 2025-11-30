/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

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
    struct Student student;

    // Read student data
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;  // Remove newline character

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    // Print student data
    printf("Name: %s | Roll: %d | Marks: %.2f\n", student.name, student.roll_no, student.marks);

    return 0;
}
--- a/file:///c%3A/Users/shema/OneDrive/Desktop/100%20Days%20of%20Coding/Day90.c
+++ b/file:///c%3A/Users/shema/OneDrive/Desktop/100%20Days%20of%20Coding/Day90.c
@@ -1,6 +1,14 @@
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[100];
    enum Gender gender;
};

int main() {
    struct Person person;
    person.gender = MALE;
    strcpy(person.name, "John Doe");

    // Print person's gender
    switch (person.gender) {
        case MALE:
            printf("Name: %s, Gender: Male\n", person.name);
            break;
        case FEMALE:
            printf("Name: %s, Gender: Female\n", person.name);
            break;
        case OTHER:
            printf("Name: %s, Gender: Other\n", person.name);
            break;
    }

    return 0;
}
