/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase 
alphabet, digit, or special character.

Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
void main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
       printf("The given character is an upper case alphabet.");
    else 
    {
        if(c>=97 && c<=112)
            printf("The given character is a lower case alphabet.");
        else
        {
            if(c>=48 && c<=57)
                printf("The given character is a digit.");
            else
                printf("The given character is a special character.");
        }
    }
}