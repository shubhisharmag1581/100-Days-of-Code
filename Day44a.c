//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    int space = 0, digits = 0, special = 0;
    char str[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ' ')
        {
            space++;
        }
        else if (isdigit(str[i]))
        {
            digits++;
        }
        else if (!isalnum(str[i]) && !isspace(str[i]))
        {
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", space, digits, special);
    return 0;
}
