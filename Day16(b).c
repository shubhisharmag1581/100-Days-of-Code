/*Q32: Write a program to check if a number is a palindrome.
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp=num, num2=0;
    int dig;
    while(temp>0)
    {
        dig=temp%10;
        num2=num2*10+dig;
        temp=temp/10;
    }
    if(num==num2)
        printf("The given number is a palindrome.");
    else
        printf("The given number is not a palindrome.");
}