//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
    return 0;
}
