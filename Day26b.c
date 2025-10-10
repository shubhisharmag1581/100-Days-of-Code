//Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

void printStars(int n) {
    for (int i=0; i<n; i++) {
        printf("*\n");
    }
}

int main() {
    printStars(1);
    printf("\n");
    printStars(4);
    printf("\n");
    printStars(5);
    printf("\n");
    printStars(3);
    printf("\n");
    printStars(1);
    return 0;
}


