/*Q34: Write a program to check if a number is prime.

Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int i=2;
    while(num>i)
    {
        if(num%i==0)
           break;
        i++;
    }
    if(num==i)
        printf("\nThe given number is a prime number");
    else
        printf("\nThe given number is not a prime number");
}