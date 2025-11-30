/*Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void print_student_info(struct Student student) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n", student.name, student.roll_no, student.marks);
}

int main() {
    struct Student student1 = {"Neha", 104, 92};
    print_student_info(student1);
    return 0;
}
