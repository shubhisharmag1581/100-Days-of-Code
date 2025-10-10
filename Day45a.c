//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main()
{
    char str[100], target;
    int i = 0, freq = 0;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the target character: ");
    scanf(" %c", &target);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == target)
        {
            freq++;
        }
        i++;
    }

    printf("The frequency of %c: %d\n", target, freq);
    return 0;
}

