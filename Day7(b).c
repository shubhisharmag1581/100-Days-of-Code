/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
void main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if((c>=65 && c<=90) || (c>=97 && c<=112))
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U' )
           printf("The given character is a vowel.");
        else
            printf("The given character is a consonant.");
    }
    else
        printf("INVALID INPUT-The given character is not an alphabet.");
}