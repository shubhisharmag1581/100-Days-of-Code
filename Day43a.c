//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, j, temp;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    str[len] = '\0';
    printf("%s\n", str);
    return 0;
}
