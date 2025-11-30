/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <stdlib.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() 
{
    enum UserRole role;
    char input[10];

    // Take user role as input from user
    printf("Enter user role (ADMIN, USER, GUEST): ");
    scanf("%s", input);

    // Map input string to enum value
    if (strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(input, "USER") == 0) {
        role = USER;
    } else if (strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid user role.\n");
        return 1;
    }

    // Print message based on user role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}