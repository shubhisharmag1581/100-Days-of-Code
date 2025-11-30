/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using 
switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <stdlib.h>
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main() 
{
    enum Operation op;
    char input[10];
    int a, b, result;

    // Take operation and two integers as input from user
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) followed by two integers: ");
    scanf("%s %d %d", input, &a, &b);

    // Map input string to enum value
    if (strcmp(input, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(input, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation.\n");
        return 1;
    }

    // Perform operation based on enum value
    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
    }

    // Print the result
    printf("%d\n", result);

    return 0;
}