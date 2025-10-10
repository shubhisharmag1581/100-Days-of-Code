//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    char num[100];
    int count[10] = {0};
    int i, max_count = 0;
    char max_digit;

    scanf("%s", num);

    for (i = 0; num[i] != '\0'; i++) {
        int digit = num[i] - '0';
        count[digit]++;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
        }
    }

    for (i = 0; num[i] != '\0'; i++) {
        int digit = num[i] - '0';
        if (count[digit] == max_count) {
            max_digit = num[i];
            break;
        }
    }

    printf("%c\n", max_digit);

    return 0;
}