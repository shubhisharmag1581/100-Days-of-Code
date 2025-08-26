/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.

Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    if (n%2==0)
        printf("The given integer is even.");
    else
        printf("The given integer is odd.");
}