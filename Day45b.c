//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("The Toggle case: ");
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
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









