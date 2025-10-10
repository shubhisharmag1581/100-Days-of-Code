//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include <ctype.h>

int main()
{
    int i=0,v=0,c=0;
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        char ch = tolower(str[i]);
        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}





