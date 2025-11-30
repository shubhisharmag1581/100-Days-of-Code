/*Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
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
